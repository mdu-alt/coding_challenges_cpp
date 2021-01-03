#include "insertion_sort.hpp"

#include <algorithm>
#include <vector>

void insertion_sort(std::vector<int>& A) noexcept
{
    if (A.empty()) {
        return;
    }

    for (auto i = A.begin() + 1; i != A.end(); ++i) {
        if (*i < *(i - 1)) {
            for (auto j = i; j != A.begin() && *j < *(j - 1); --j) {
                std::iter_swap(j - 1, j);
            }
        }
    }
}
