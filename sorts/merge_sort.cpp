#include "merge_sort.hpp"

#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>

namespace sorts {

void merge_sort_internal(std::vector<int>& vector, std::vector<int>::iterator begin,
                         std::vector<int>::iterator end) noexcept
{
    auto size = std::distance(begin, end);

    if (size < 2) {
        return;
    }

    auto boundary = begin + (size / 2);

    merge_sort_internal(vector, begin, boundary);
    merge_sort_internal(vector, boundary, end);

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

void merge_sort(std::vector<int>& vector) noexcept
{
    merge_sort_internal(vector, vector.begin(), vector.end());
}

} // namespace sorts
