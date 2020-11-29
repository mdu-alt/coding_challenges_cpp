#include "MergeSort.hpp"

#include <algorithm>
#include <iterator>

using Iterator = std::vector<int>::iterator;

void merge_sort_internal(std::vector<int>& A, Iterator begin, Iterator end) noexcept;

void merge_sort(std::vector<int>& A) noexcept
{
    merge_sort_internal(A, A.begin(), A.end());
}

// =====================================================================================================================

void merge_sort_internal(std::vector<int>& A, Iterator begin, Iterator end) noexcept
{
    auto size = std::distance(begin, end);

    if (size <= 1) {
        return;
    }

    auto boundary = begin + (size / 2);

    merge_sort_internal(A, begin, boundary);
    merge_sort_internal(A, boundary, end);

    auto i = begin;
    auto j = boundary;

    std::vector<int> sorted;

    while (i != boundary && j != end) {
        if (*i < *j) {
            sorted.emplace_back(*i);
            ++i;
        }
        else {
            sorted.emplace_back(*j);
            ++j;
        }
    }

    if (i != boundary) {
        sorted.insert(sorted.end(), i, boundary);
    }
    else if (j != end) {
        sorted.insert(sorted.end(), j, end);
    }

    std::move(sorted.begin(), sorted.end(), begin);
}
