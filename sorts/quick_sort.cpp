#include "quick_sort.hpp"

#include <algorithm>
#include <iterator>
#include <vector>

namespace sorts {

void quick_sort_internal(std::vector<int>& vector, std::vector<int>::iterator begin,
                         std::vector<int>::iterator end) noexcept
{
    if (std::distance(begin, end) < 2) {
        return;
    }

    auto pivot = end - 1;
    auto tracker = begin;

    for (auto i = begin; i != end; ++i) {
        if (*i < *pivot) {
            std::iter_swap(tracker, i);
            ++tracker;
        }
    }

    std::iter_swap(tracker, pivot);

    quick_sort_internal(vector, begin, tracker);
    quick_sort_internal(vector, tracker + 1, end);
}

void quick_sort(std::vector<int>& vector) noexcept
{
    quick_sort_internal(vector, vector.begin(), vector.end());
}

} // namespace sorts
