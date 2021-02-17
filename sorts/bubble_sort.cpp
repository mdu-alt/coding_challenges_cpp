#include "bubble_sort.hpp"

#include <algorithm>
#include <vector>

namespace sorts {

void bubble_sort(std::vector<int>& vector) noexcept
{
    auto i = vector.begin() + 1;
    auto j = vector.end();

    while (i < j) {
        auto m = i;

        for (auto k = i; k < j; ++k) {
            if (*k < *(k - 1)) {
                std::iter_swap(k, k - 1);
                m = k;
            }
        }

        j = m;
    }
}

} // namespace sorts
