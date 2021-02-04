#include "binary_tree_height.hpp"

#include "trees.hpp"

namespace trees {

int binary_tree_height(const Binary_tree* const tree) noexcept
{
    if (tree == nullptr) {
        return 0;
    }

    int left_height { 0 };
    int right_height { 0 };

    if (tree->left_child != nullptr) {
        left_height = 1 + binary_tree_height(tree->left_child);
    }

    if (tree->right_child != nullptr) {
        right_height = 1 + binary_tree_height(tree->right_child);
    }

    return left_height > right_height ? left_height : right_height;
}

} // namespace trees
