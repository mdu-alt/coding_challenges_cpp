#include <string>

#include <gtest/gtest.h>

#include "almost_palindrome.hpp"

namespace {

TEST(is_almost_palindrome, empty)
{
    const std::string empty;

    EXPECT_FALSE(strings::is_almost_palindrome(empty));
}

TEST(is_almost_palindrome, single_char)
{
    const std::string single_char_1 { "a" };
    const std::string single_char_2 { "0" };
    const std::string single_char_3 { "/" };

    EXPECT_FALSE(strings::is_almost_palindrome(single_char_1));
    EXPECT_FALSE(strings::is_almost_palindrome(single_char_2));
    EXPECT_FALSE(strings::is_almost_palindrome(single_char_3));
}

TEST(is_almost_palindrome, palindrome)
{
    const std::string palindrome_1 { "aaa" };
    const std::string palindrome_2 { "racecar" };
    const std::string palindrome_3 { "/1aa1/" };

    EXPECT_FALSE(strings::is_almost_palindrome(palindrome_1));
    EXPECT_FALSE(strings::is_almost_palindrome(palindrome_2));
    EXPECT_FALSE(strings::is_almost_palindrome(palindrome_3));
}

TEST(is_almost_palindrome, almost_palindrome)
{
    const std::string almost_palindrome_1 { "noons" };
    const std::string almost_palindrome_2 { "engage" };
    const std::string almost_palindrome_3 { "/1baa1/" };

    EXPECT_TRUE(strings::is_almost_palindrome(almost_palindrome_1));
    EXPECT_TRUE(strings::is_almost_palindrome(almost_palindrome_2));
    EXPECT_TRUE(strings::is_almost_palindrome(almost_palindrome_3));
}

TEST(is_almost_palindrome, any)
{
    const std::string any_1 { "abc" };
    const std::string any_2 { "hello" };
    const std::string any_3 { "1./23%&m" };

    EXPECT_FALSE(strings::is_almost_palindrome(any_1));
    EXPECT_FALSE(strings::is_almost_palindrome(any_2));
    EXPECT_FALSE(strings::is_almost_palindrome(any_3));
}

} // namespace
