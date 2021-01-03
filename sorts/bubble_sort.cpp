#include "bubble_sort.hpp"

#include <algorithm>
#include <vector>

namespace sorts {

void bubble_sort(std::vector<int>& vector) noexcept
{
    if (vector.empty()) {
        return;
    }

    for (auto i = vector.end() - 1; i != vector.begin(); --i) {
        bool sorted { true };

        for (auto j = vector.begin(); j != i; ++j) {
            if (*(j + 1) < *j) {
                std::iter_swap(j, j + 1);
                sorted = false;
            }
        }

        if (sorted) {
            break;
        }
    }
}

} // namespace sorts
