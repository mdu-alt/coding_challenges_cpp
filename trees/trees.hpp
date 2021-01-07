#ifndef TREES__TREES_HPP
#define TREES__TREES_HPP

/**
 * @file
 */

#include <stack>
#include <string_view>

namespace trees {

/**
 * @brief A binary node.
 *
 * Represent a tree node that has at most two children.
 */
struct Binary_node final {
    /**
     * @brief The left child of @c Binary_node.
     */
    Binary_node* left_child { nullptr };

    /**
     * @brief The right child of @c Binary_node.
     */
    Binary_node* right_child { nullptr };

    ~Binary_node() noexcept { delete left_child, right_child; }
};

using Binary_tree = Binary_node;

// =====================================================================================================================

/**
 * @brief Helper function --- generate a binary tree from a string.
 *
 * @remark The expected "grammar" for tree generation is:
 *     - `l` represents a left child;
 *     - `r` represents a right child;
 *     - `(` represents go down one level;
 *     - `)` represents go up one level.
 * @remark Other characters are ignored.
 *
 * @param[in] string A string representation of a tree.
 *
 * @return A binary tree.
 */
Binary_node make_tree(std::string_view string);

} // namespace trees

#endif
