#include "BubbleSort.hpp"

#include <algorithm>
#include <iterator>

std::vector<int> bubble_sort(std::vector<int>& A) noexcept
{
    for (auto it_reverse = std::rbegin(A); it_reverse != std::rend(A); ++it_reverse) {
        bool sorted{ true };

        for (auto it = std::begin(A); it != (it_reverse.base() - 1); ++it) {
            if (*it > *(it + 1)) {
                std::iter_swap(it, it + 1);
                sorted = false;
            }
        }

        if (sorted) {
            return A;
        }
    }

    return A;
}
