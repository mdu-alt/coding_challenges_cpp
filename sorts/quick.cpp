#include "quick.hpp"

#include <algorithm>
#include <iterator>
#include <vector>

namespace sorts {

void quick_sort(std::vector<int>::iterator begin, std::vector<int>::iterator end) noexcept
{
    if (end - begin < 2) {
        return;
    }

    auto i = begin;
    auto j = end - 1;

    // Hoare partition scheme.
    int pivot { *(i + (j - i) / 2) };

    while (i <= j) {
        while (*i < pivot) {
            ++i;
        }

        while (pivot < *j) {
            --j;
        }

        if (i <= j) {
            std::iter_swap(i, j);
            ++i;
            --j;
        }
    }

    quick_sort(begin, i);
    quick_sort(i, end);
}

void quick(std::vector<int>& vector) noexcept
{
    quick_sort(vector.begin(), vector.end());
}

} // namespace sorts
