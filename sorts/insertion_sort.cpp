#include "insertion_sort.hpp"

#include <algorithm>
#include <vector>

namespace sorts {

void insertion_sort(std::vector<int>& vector) noexcept
{
    if (vector.empty()) {
        return;
    }

    for (auto i = vector.begin() + 1; i != vector.end(); ++i) {
        if (*i < *(i - 1)) {
            for (auto j = i; j != vector.begin() && *j < *(j - 1); --j) {
                std::iter_swap(j - 1, j);
            }
        }
    }
}

} // namespace  sorts
