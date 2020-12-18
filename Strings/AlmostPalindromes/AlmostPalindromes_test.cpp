#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "AlmostPalindromes.hpp"

TEST(AlmostPalindromes, empty)
{
    std::vector<std::string> empty{ "" };

    ASSERT_EQ(find_almost_palindromes(empty), std::vector<std::string>{});
}

TEST(AlmostPalindromes, single_char)
{
    std::vector<std::string> single_char{ "a", "b", "c" };

    ASSERT_EQ(find_almost_palindromes(single_char), std::vector<std::string>{});
}

TEST(AlmostPalindromes, palindromes)
{
    std::vector<std::string> palindromes{ "aaa", "abba", "racecar" };

    ASSERT_EQ(find_almost_palindromes(palindromes), std::vector<std::string>{});
}

TEST(AlmostPalindromes, almost_palindromes)
{
    std::vector<std::string> almost_palindromes{ "ab", "noons", "engage" };

    ASSERT_EQ(find_almost_palindromes(almost_palindromes), std::vector<std::string>({ "ab", "noons", "engage" }));
}

TEST(AlmostPalindromes, no_palindromes)
{
    std::vector<std::string> no_palindromes{ "abc", "hello", "printer" };

    ASSERT_EQ(find_almost_palindromes(no_palindromes), std::vector<std::string>{});
}

TEST(AlmostPalindromes, mixed)
{
    std::vector<std::string> mixed{ "aaa", "ab", "noons", "engage", "b", "racecar" };

    ASSERT_EQ(find_almost_palindromes(mixed), std::vector<std::string>({ "ab", "noons", "engage" }));
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
