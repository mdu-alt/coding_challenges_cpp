#include "heap.hpp"

#include <vector>

namespace sorts {

void sift_down(std::vector<int>& vector, std::vector<int>::size_type begin, std::vector<int>::size_type end)
{
    auto root = begin;

    while (2 * root + 1 <= end) {
        auto child = 2 * root + 1;
        auto swap = root;

        if (vector.at(swap) < vector.at(child)) {
            swap = child;
        }
        if (child + 1 <= end && vector.at(swap) < vector.at(child + 1)) {
            swap = child + 1;
        }

        if (swap == root) {
            return;
        }

        std::swap(vector.at(root), vector.at(swap));
        root = swap;
    }
}

void heap(std::vector<int>& vector) noexcept
{
    if (vector.empty()) {
        return;
    }

    auto end = vector.size() - 1;
    int parent = (end - 1) / 2;

    // heapify
    while (parent >= 0) {
        sift_down(vector, parent, end);
        parent--;
    }

    while (end > 0) {
        std::swap(vector.at(end), vector.at(0));
        end--;
        sift_down(vector, 0, end);
    }
}

} // namespace sorts
