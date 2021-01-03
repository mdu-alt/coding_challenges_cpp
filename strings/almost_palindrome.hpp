#ifndef STRINGS__ALMOST_PALINDROME
#define STRINGS__ALMOST_PALINDROME

/**
 * @file
 */

#include <string_view>

namespace strings {

/**
 * @brief Tell if a string is almost a palindrome.
 *
 * <BLOCKQUOTE>A _palindrome_ is a string that is spelled the same backwards as
 * it is forwards, like "racecar." An _almost_ palindrome is a string that
 * turns into a palindrome by removing one (and only one) character.
 * </BLOCKQUOTE>
 *
 * @param[in] string A string of `[0..n]` characters.
 *
 * @return A boolean flag about whether @p string is or is not almost a
 * palindrome.
 */
bool is_almost_palindrome(std::string_view string) noexcept;

} // namespace strings

#endif
