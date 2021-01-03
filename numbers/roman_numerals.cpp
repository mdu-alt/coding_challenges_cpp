#include "roman_numerals.hpp"

#include <string_view>
#include <vector>

namespace numbers {

enum Letter
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

Letter map_to_letter(char ch) noexcept
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

int map_to_decimal(Letter symbol) noexcept
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

    std::vector<Letter> previous_letters;
    Letter previous { N };
    Letter current { N };
    Letter min { N };

    for (auto i = roman.crbegin(); i != roman.crend(); ++i) {
        current = map_to_letter(*i);

        if (current == N || current < min) {
            return -1;
        }

        if (!previous_letters.empty() && previous_letters.back() == current) {
            previous_letters.push_back(current);

            // Invalid case: "IIII"
            if (previous_letters.size() > 3) {
                return -1;
            }
        }
        else {
            previous_letters.clear();
            previous_letters.push_back(current);
        }

        // Invalid cases: "VV", "LL", "DD"
        if (current & previous & (V | L | D)) {
            return -1;
        }

        // Case: "IV"
        if ((current & (I | X | C)) && current < previous && previous <= (current << 2)) {
            decimal -= map_to_decimal(current);

            // Guard against (next iteration): "IIX"
            min = previous;
        }
        // Case: "VI"
        else if (current >= previous) {
            decimal += map_to_decimal(current);

            // Guard against (next iteration): "IXI"
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

    return roman;
}

} // namespace numbers
