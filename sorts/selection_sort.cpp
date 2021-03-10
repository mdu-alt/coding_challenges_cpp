#include "selection_sort.hpp"

#include <algorithm>
#include <vector>

namespace sorts {

void selection(std::vector<int>& vector) noexcept
{
    for (auto i = vector.begin(); i < vector.end(); ++i) {
        auto min = i;

        for (auto j = i + 1; j < vector.end(); ++j) {
            if (*j < *min) {
                min = j;
            }
        }

        std::iter_swap(i, min);
    }
}

} // namespace sorts
