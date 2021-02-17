#include "insertion_sort.hpp"

#include <algorithm>
#include <vector>

namespace sorts {

void insertion_sort(std::vector<int>& vector) noexcept
{
    for (auto i = vector.begin() + 1; i < vector.end(); ++i) {
        int x { *i };
        auto j = i - 1;

        while (j >= vector.begin() && x < *j) {
            --j;
        }

        // Shift elements to the right, then assign x in-place.
        std::copy(j + 1, i, j + 2);
        *(j + 1) = x;
    }
}

} // namespace sorts
