#ifndef STRINGS__GROUP_ANAGRAMS
#define STRINGS__GROUP_ANAGRAMS

/**
 * @file
 */

#include <set>
#include <string>
#include <vector>

namespace strings {

/**
 * @brief Group anagrams together.
 *
 * @remark An _anagram_ is a word or phrase formed by rearranging the letters
 * of a different word or phrase, typically using all the original letters
 * exactly once.
 *
 * @param[in] word_list A `[0..n]` vector of strings of `[0..n]` characters.
 *
 * @return The anagrams grouped together. The output upper set may group words
 * in any orders.
 */
std::set<std::set<std::string>> group_anagrams(const std::vector<std::string>& word_list) noexcept;

} // namespace strings

#endif
