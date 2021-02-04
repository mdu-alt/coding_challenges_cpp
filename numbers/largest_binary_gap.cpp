#include "largest_binary_gap.hpp"

namespace numbers {

int largest_binary_gap(int n) noexcept
{
    if (n < 0) {
        return -1;
    }

    bool has_bit_1 { false };
    int accumulator { 0 };
    int gap { 0 };

    while (n != 0) {
        if ((n & 1) == 0 && has_bit_1) {
            ++accumulator;
        }
        else if ((n & 1) == 1) {
            has_bit_1 = true;
            gap = accumulator > gap ? accumulator : gap;
            accumulator = 0;
        }

        n >>= 1;
    }

    return gap;
}

} // namespace numbers
