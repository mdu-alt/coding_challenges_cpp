#include "QuickSort.hpp"

#include <algorithm>

void quick_sort(std::vector<int>& A) noexcept
{
    if (A.size() <= 1) {
        return;
    }

    auto pivot = A.end() - 1;
    auto tracker = A.begin();

    for (auto i = A.begin(); i != A.end(); ++i) {
        if (*i < *pivot) {
            std::iter_swap(tracker, i);
            ++tracker;
        }
    }

    std::iter_swap(tracker, pivot);

    std::vector<int> left(A.begin(), tracker);
    std::vector<int> right(tracker + 1, A.end());

    quick_sort(left);
    quick_sort(right);

    A.assign(left.begin(), left.end());
    A.push_back(*tracker);
    A.insert(A.end(), right.begin(), right.end());
}
