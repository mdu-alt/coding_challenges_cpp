#ifndef STRINGS__NESTED_PARENTHESES
#define STRINGS__NESTED_PARENTHESES

#include <string_view>

namespace strings {

/**
 * @brief Count all matching pairs of parentheses, `(` and `)`, in a string.
 *
 * @param[in] string A string of `[0..n]` characters.
 *
 * @return The number of matching pairs of parentheses in @p string.
 */
int count_parentheses_pairs(std::string_view string) noexcept;

} // namespace strings

#endif
