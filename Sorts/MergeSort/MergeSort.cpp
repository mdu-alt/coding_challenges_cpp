#include "MergeSort.hpp"

#include <algorithm>

void merge_sort(std::vector<int>& A) noexcept
{
    if (A.size() <= 1) {
        return;
    }

    std::vector<int> left(A.begin(), A.begin() + (A.size() / 2));
    std::vector<int> right(A.begin() + (A.size() / 2), A.end());

    merge_sort(left);
    merge_sort(right);

    auto i = left.begin();
    auto j = right.begin();

    std::vector<int> sorted;

    while (i != left.end() && j != right.end()) {
        if (*i < *j) {
            sorted.push_back(*i);
            ++i;
        }
        else {
            sorted.push_back(*j);
            ++j;
        }
    }

    if (i != left.end()) {
        sorted.insert(sorted.end(), i, left.end());
    }
    else if (j != right.end()) {
        sorted.insert(sorted.end(), j, right.end());
    }

    A = sorted;
}
