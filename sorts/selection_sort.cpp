#include "selection_sort.hpp"

#include <algorithm>
#include <vector>

void selection_sort(std::vector<int>& A) noexcept
{
    for (auto i = A.begin(); i != A.end(); ++i) {
        auto min_index = i;

        for (auto j = i; j != A.end(); ++j) {
            if (*j < *min_index) {
                min_index = j;
            }
        }

        std::iter_swap(i, min_index);
    }
}
