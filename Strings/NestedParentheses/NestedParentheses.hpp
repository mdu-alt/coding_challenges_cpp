#ifndef NESTED_PARENTHESES
#define NESTED_PARENTHESES

#include <string_view>

/**
 * @file
 * @brief Process nested parentheses in a string --- pairs and orphans.
 */

/**
 * @brief Count all matching pairs of parentheses in a string.
 *
 * @param[in] string A string.
 * @return The number of pairs of parentheses in @p string.
 */
int count_pairs(std::string_view string) noexcept;

/**
 * @brief Count all orphaned parentheses in a string.
 *
 * @param[in] string A string.
 * @return The number of orphaned parentheses in @p string.
 */
int count_orphan(std::string_view string) noexcept;

#endif
