#include <set>
#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "group_anagrams.hpp"

namespace {

TEST(group_anagrams, empty)
{
    const std::vector<std::string> empty;
    const std::set<std::set<std::string>> result;

    EXPECT_EQ(strings::group_anagrams(empty), result);
}

TEST(group_anagrams, one)
{
    const std::vector<std::string> one { "hello" };
    const std::set<std::set<std::string>> result { { "hello" } };

    EXPECT_EQ(strings::group_anagrams(one), result);
}

TEST(group_anagrams, many)
{
    const std::vector<std::string> many { "hello", "code", "cdeo", "ecod" };
    const std::set<std::set<std::string>> result { { "ecod", "code", "cdeo" }, { "hello" } };

    EXPECT_EQ(strings::group_anagrams(many), result);
}

TEST(group_anagrams, duplicates)
{
    const std::vector<std::string> duplicates { "hello", "code", "cdeo", "ecod", "ecod", "ecod", "abc", "abc", "bac" };
    const std::set<std::set<std::string>> result { { "hello" }, { "cdeo", "ecod", "code" }, { "abc", "bac" } };

    EXPECT_EQ(strings::group_anagrams(duplicates), result);
}

} // namespace
