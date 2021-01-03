#ifndef STRINGS__REPEATED_CHARACTERS
#define STRINGS__REPEATED_CHARACTERS

/**
 * @file
 */

#include <string>
#include <string_view>

namespace strings {

/**
 * @brief Remove all but the first instance of each character in a string.
 *
 * @param[in] string A string of `[0..n]` characters.
 *
 * @return A copy of @p string with all repeated characters removed. The
 * original characters order is preserved.
 */
std::string remove_repeated_characters(std::string_view string);

} // namespace strings

#endif
