#include "SelectionSort.hpp"

#include <algorithm>

std::vector<int> selection_sort(std::vector<int>& A) noexcept
{
    for (auto it_out = std::begin(A); it_out != std::end(A); it_out++) {
        auto index_min = it_out;

        for (auto it_in = it_out; it_in != std::end(A); it_in++) {
            if (*it_in < *index_min) {
                index_min = it_in;
            }
        }

        std::iter_swap(it_out, index_min);
    }

    return A;
}
