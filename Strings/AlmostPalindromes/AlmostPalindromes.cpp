#include "AlmostPalindromes.hpp"

bool is_palindrome(std::string::const_iterator begin, std::string::const_iterator end) noexcept
{
    while (std::distance(begin, end) > 0) {
        if (*begin != *end) {
            return false;
        }

        ++begin;
        --end;
    }

    return true;
}

std::vector<std::string> find_almost_palindromes(const std::vector<std::string>& words) noexcept
{
    std::vector<std::string> output;

    for (auto&& word : words) {
        if (word.size() < 2) {
            continue;
        }

        auto i = word.begin();
        auto j = word.end() - 1;

        bool has_palindrome{ false };

        while (std::distance(i, j) > 0) {
            if (*i != *j) {
                if (*(i + 1) == *j) {
                    has_palindrome = is_palindrome(i + 1, j);
                }
                else if (*i == *(j - 1)) {
                    has_palindrome = is_palindrome(i, j - 1);
                }

                break;
            }

            ++i;
            --j;
        }

        if (has_palindrome) {
            output.push_back(word);
        }
    }

    return output;
}
