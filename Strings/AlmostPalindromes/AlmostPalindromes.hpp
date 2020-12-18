#ifndef ALMOST_PALINDROMES
#define ALMOST_PALINDROMES

#include <string>
#include <vector>

/**
 * @file
 * @brief Find almost palindrome strings in a words list.
 *
 * A **palindrome** is a string that is spelled the same backwards as it is
 * forwards, like "racecar." An **almost palindrome** is a string that turns
 * into a palindrome by removing one (and only one) character.
 *
 * Given a list of words as input, the function returns all almost palindromes
 * it finds.
 */

/**
 * @param[in] words A list of words.
 * @return All almost palindromes found in @p words.
 */
std::vector<std::string> find_almost_palindromes(const std::vector<std::string>& words) noexcept;

#endif
