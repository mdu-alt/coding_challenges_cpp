#ifndef TREES__BINARY_TREE_HEIGHT_HPP
#define TREES__BINARY_TREE_HEIGHT_HPP

/**
 * @file
 */

#include "trees.hpp"

namespace trees {

/**
 * @brief Compute the height of a binary tree.
 *
 * @param[in] tree A pointer to a binary tree.
 *
 * @return The height of @p tree.
 */
int binary_tree_height(const Binary_tree const* tree) noexcept;

} // namespace trees

#endif
