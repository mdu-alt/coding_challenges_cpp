#include "bubble_sort.hpp"

#include <algorithm>
#include <vector>

namespace sorts {

void bubble_sort(std::vector<int>& vector) noexcept
{
    for (auto i = vector.rbegin(); i != vector.rend(); ++i) {
        bool sorted { true };

        for (auto j = vector.begin(); j != (i.base() - 1); ++j) {
            if (*j > *(j + 1)) {
                std::iter_swap(j, j + 1);
                sorted = false;
            }
        }

        if (sorted) {
            break;
        }
    }
}

} // namespace  sorts
