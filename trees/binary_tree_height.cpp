#include "binary_tree_height.hpp"

#include <algorithm>

#include "trees.hpp"

namespace trees {

int binary_tree_height(Binary_tree* tree) noexcept
{
    int left_height { 0 };
    int right_height { 0 };

    if (tree->left_child != nullptr) {
        left_height = binary_tree_height(tree->left_child) + 1;
    }

    if (tree->right_child != nullptr) {
        right_height = binary_tree_height(tree->right_child) + 1;
    }

    return std::max(left_height, right_height);
}

} // namespace trees
