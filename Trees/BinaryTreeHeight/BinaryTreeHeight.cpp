#include "BinaryTreeHeight.hpp"

#include <algorithm>

int binary_tree_height(Tree* T) noexcept
{
    int left_height{ 0 };
    int right_height{ 0 };

    if (T->left_child != nullptr) {
        left_height = binary_tree_height(T->left_child) + 1;
    }

    if (T->right_child != nullptr) {
        right_height = binary_tree_height(T->right_child) + 1;
    }

    return std::max(left_height, right_height);
}
