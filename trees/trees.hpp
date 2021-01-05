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
Binary_node make_tree(std::string_view string)
{
    Binary_node root;
    std::stack<Binary_node*> nodes;
    Binary_node* last_node { nullptr };

    nodes.push(&root);

    for (auto&& ch : string) {
        // Left child
        if (ch == 'l' && !nodes.empty() && nodes.top()->left_child == nullptr) {
            last_node = new Binary_node;
            nodes.top()->left_child = last_node;
        }
        // Right child
        else if (ch == 'r' && !nodes.empty() && nodes.top()->right_child == nullptr) {
            last_node = new Binary_node;
            nodes.top()->right_child = last_node;
        }
        // Go down
        else if (ch == '(' && last_node != nullptr && !nodes.empty() && nodes.top() != last_node) {
            nodes.push(last_node);
        }
        // Go up
        else if (ch == ')' && !nodes.empty() && nodes.size() > 1) {
            nodes.pop();
        }
    }

    return root;
}

} // namespace trees

#endif
