#include "selection_sort.hpp"

#include <algorithm>
#include <vector>

namespace sorts {

void selection_sort(std::vector<int>& vector) noexcept
{
    for (auto i = vector.begin(); i != vector.end(); ++i) {
        auto min_index = i;

        for (auto j = i; j != vector.end(); ++j) {
            if (*j < *min_index) {
                min_index = j;
            }
        }

        std::iter_swap(i, min_index);
    }
}

} // namespace sorts
