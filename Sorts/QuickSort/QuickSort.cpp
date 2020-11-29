#include "QuickSort.hpp"

#include <algorithm>

using Iterator = std::vector<int>::iterator;

void quick_sort_internal(std::vector<int>& A, Iterator begin, Iterator end) noexcept;

void quick_sort(std::vector<int>& A) noexcept
{
    quick_sort_internal(A, A.begin(), A.end());
}

// =====================================================================================================================

void quick_sort_internal(std::vector<int>& A, Iterator begin, Iterator end) noexcept
{
    if (std::distance(begin, end) <= 1) {
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

    quick_sort_internal(A, begin, tracker);
    quick_sort_internal(A, tracker + 1, end);
}
