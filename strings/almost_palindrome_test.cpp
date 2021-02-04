#include <gtest/gtest.h>

#include "almost_palindrome.hpp"

namespace {

TEST(is_almost_palindrome, empty)
{
    EXPECT_FALSE(strings::is_almost_palindrome(""));
}

TEST(is_almost_palindrome, single_char)
{
    EXPECT_FALSE(strings::is_almost_palindrome("a"));
    EXPECT_FALSE(strings::is_almost_palindrome("2"));
    EXPECT_FALSE(strings::is_almost_palindrome("/"));
}

TEST(is_almost_palindrome, palindrome)
{
    EXPECT_FALSE(strings::is_almost_palindrome("aaa"));
    EXPECT_FALSE(strings::is_almost_palindrome("racecar"));
    EXPECT_FALSE(strings::is_almost_palindrome("/1aa1/"));
}

TEST(is_almost_palindrome, almost_palindrome)
{
    EXPECT_TRUE(strings::is_almost_palindrome("noons"));
    EXPECT_TRUE(strings::is_almost_palindrome("engage"));
    EXPECT_TRUE(strings::is_almost_palindrome("/1baa1/"));
}

TEST(is_almost_palindrome, any)
{
    EXPECT_FALSE(strings::is_almost_palindrome("abc"));
    EXPECT_FALSE(strings::is_almost_palindrome("hello"));
    EXPECT_FALSE(strings::is_almost_palindrome("1./23%&m"));
}

} // namespace
