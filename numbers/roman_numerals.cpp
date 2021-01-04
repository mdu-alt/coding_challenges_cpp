#include "roman_numerals.hpp"

#include <algorithm>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

namespace numbers {

enum Symbol
{
    N,        // 0
    I = 0x1,  // 1
    V = 0x2,  // 5
    X = 0x4,  // 10
    L = 0x8,  // 50
    C = 0x10, // 100
    D = 0x20, // 500
    M = 0x40  // 1000
};

Symbol map_to_symbol(char ch) noexcept
{
    switch (ch) {
    case 'M':
        return M;
    case 'D':
        return D;
    case 'C':
        return C;
    case 'L':
        return L;
    case 'X':
        return X;
    case 'V':
        return V;
    case 'I':
        return I;
    default:
        return N;
    }
}

int map_to_decimal(Symbol symbol) noexcept
{
    switch (symbol) {
    case M:
        return 1000;
    case D:
        return 500;
    case C:
        return 100;
    case L:
        return 50;
    case X:
        return 10;
    case V:
        return 5;
    case I:
        return 1;
    default:
        return -1;
    }
}

int roman_to_decimal(std::string_view roman) noexcept
{
    int decimal { 0 };

    std::vector<Symbol> previous_symbols;
    Symbol previous { N };
    Symbol current { N };
    Symbol min { N };

    for (auto i = roman.crbegin(); i != roman.crend(); ++i) {
        current = map_to_symbol(*i);

        if (current == N || current < min) {
            return -1;
        }

        if (!previous_symbols.empty() && previous_symbols.back() == current) {
            previous_symbols.push_back(current);

            // Invalid case: "IIII"
            if (previous_symbols.size() > 3) {
                return -1;
            }
        }
        else {
            previous_symbols.clear();
            previous_symbols.push_back(current);
        }

        // Invalid cases: "VV", "LL", "DD"
        if (current & previous & (V | L | D)) {
            return -1;
        }

        // Case: "IV"
        if ((current & (I | X | C)) && current < previous && previous <= (current << 2)) {
            decimal -= map_to_decimal(current);

            // Guard against (for next iteration): "IIX"
            min = previous;
        }
        // Case: "VI"
        else if (current >= previous) {
            decimal += map_to_decimal(current);

            // Guard against (for next iteration): "IXI"
            if (previous != N) {
                min = current;
            }
        }
        // Invalid cases: "VX", "IL"
        else {
            return -1;
        }

        previous = current;
    }

    return decimal;
}

// =====================================================================================================================

std::string decimal_to_roman(int decimal) noexcept
{
    std::string roman;

    if (decimal < 1 || decimal > 3999) {
        return roman;
    }

    std::ostringstream buffer;

    // Each iteration, the loop works on each digit of the number (starting
    // from the unit) and a limited set of symbols is used each time: "IVX",
    // "XLC" and "CDM".
    static const std::string symbols { "IVXLCDM" };
    int offset { 0 };

    while (decimal != 0) {
        int digit = decimal % 10;

        if (0 < digit && digit < 4) {
            buffer << std::string(digit, symbols.at(offset));
        }
        else if (digit == 4) {
            buffer << symbols.at(offset + 1) << symbols.at(offset);
        }
        else if (4 < digit && digit < 9) {
            buffer << std::string(digit - 5, symbols.at(offset)) << symbols.at(offset + 1);
        }
        else if (digit == 9) {
            buffer << symbols.at(offset + 2) << symbols.at(offset);
        }

        decimal /= 10;
        offset += 2;
    }

    roman = buffer.str();
    std::ranges::reverse(roman);

    return roman;
}

} // namespace numbers
