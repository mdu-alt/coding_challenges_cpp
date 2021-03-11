#include "roman_numerals.hpp"

#include <algorithm>
#include <map>
#include <sstream>
#include <string>
#include <string_view>

namespace numbers {

enum Symbol
{
    I = 1,      // 1
    V = I << 1, // 5
    X = V << 1, // 10
    L = X << 1, // 50
    C = L << 1, // 100
    D = C << 1, // 500
    M = D << 1, // 1000
    N = M << 1  // special value (upper bound)
};

Symbol map_to_symbol(char ch) noexcept
{
    static const std::unordered_map<char, Symbol> mapping{
        {'I', I},
        {'V', V},
        {'X', X},
        {'L', L},
        {'C', C},
        {'D', D},
        {'M', M},
    };

    if (mapping.contains(ch)) {
        return mapping.at(ch);
    }

    return N;
}

int map_to_decimal(Symbol symbol) noexcept
{
    static const std::unordered_map<Symbol, int> mapping{
        {I, 1},
        {V, 5},
        {X, 10},
        {L, 50},
        {C, 100},
        {D, 500},
        {M, 1000},
    };

    if (mapping.contains(symbol)) {
        return mapping.at(symbol);
    }

    return 0;
}

int roman_to_decimal(std::string_view roman) noexcept
{
    Symbol previous{N};
    Symbol max{N};
    int accumulator{0};
    int decimal{0};

    for (auto&& ch : roman) {
        Symbol current{map_to_symbol(ch)};

        // Invalid cases: "A" / "3" / "$" / "VV" / "VIV" / "IXI" / "CMC"
        if (current == N || current >= max) {
            return -1;
        }

        // Invalid cases: "IIX" / "CCM"
        if (accumulator == 2 && current > previous) {
            return -1;
        }

        // Invalid cases: "IIII" / "CCCC"
        if (current == previous) {
            if (accumulator++; accumulator > 3) {
                return -1;
            }
        }
        else {
            accumulator = 1;
        }

        // Cases: "IV" / "CM"
        if ((previous & (I | X | C)) && current > previous && current <= (previous << 2)) {
            decimal += map_to_decimal(current) - 2 * map_to_decimal(previous);

            max = previous;
        }
        // Case: "VI" / "CL"
        else {
            decimal += map_to_decimal(current);

            if (current & (V | L | D)) {
                max = current;
            }
        }

        previous = current;
    }

    return decimal;
}

// =====================================================================================================================

std::string decimal_to_roman(int decimal) noexcept
{
    if (decimal < 1 || decimal > 3999) {
        return "";
    }

    std::string roman;
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
