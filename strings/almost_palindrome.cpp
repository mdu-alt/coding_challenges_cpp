#include "almost_palindrome.hpp"

#include <iterator>
#include <string_view>

namespace strings {

bool is_palindrome(std::string_view::const_iterator begin, std::string_view::const_iterator end) noexcept
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

bool is_almost_palindrome(std::string_view word) noexcept
{
    auto i = word.begin();
    auto j = word.end() - 1;

    while (std::distance(i, j) > 0) {
        if (*i != *j) {
            if (*(i + 1) == *j) {
                return is_palindrome(i + 1, j);
            }
            else if (*i == *(j - 1)) {
                return is_palindrome(i, j - 1);
            }

            break;
        }

        ++i;
        --j;
    }

    return false;
}

} // namespace strings
