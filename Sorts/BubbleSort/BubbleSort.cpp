#include "BubbleSort.hpp"

#include <algorithm>

void bubble_sort(std::vector<int>& A) noexcept
{
    for (auto i = A.rbegin(); i != A.rend(); ++i) {
        bool sorted{ true };

        for (auto j = A.begin(); j != (i.base() - 1); ++j) {
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
