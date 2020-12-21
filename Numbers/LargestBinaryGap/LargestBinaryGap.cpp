#include "LargestBinaryGap.hpp"

#include <algorithm>

int largest_binary_gap(int N) noexcept
{
    bool previous_bit_was_1{ false };
    int accumulator{ 0 };
    int gaps{ 0 };

    while (N != 0) {
        if ((N & 1) == 0 && previous_bit_was_1) {
            ++accumulator;
            previous_bit_was_1 == false;
        }
        else if ((N & 1) == 1) {
            previous_bit_was_1 = true;

            if (accumulator > 0) {
                gaps = std::max(accumulator, gaps);
                accumulator = 0;
            }
        }

        N >>= 1;
    }

    return gaps;
}
