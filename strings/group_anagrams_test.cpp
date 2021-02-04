#include <set>
#include <string>
#include <vector>

#include <gtest/gtest.h>

#include "group_anagrams.hpp"

namespace {

TEST(group_anagrams, empty)
{
    EXPECT_EQ(strings::group_anagrams({}), std::set<std::set<std::string>>({}));
}

TEST(group_anagrams, one)
{
    EXPECT_EQ(strings::group_anagrams({ "hello" }), std::set<std::set<std::string>>({ { "hello" } }));
}

TEST(group_anagrams, many)
{
    EXPECT_EQ(strings::group_anagrams({ "hello", "code", "cdeo", "ecod" }),
              std::set<std::set<std::string>>({ { "ecod", "code", "cdeo" }, { "hello" } }));
}

TEST(group_anagrams, duplicates)
{
    EXPECT_EQ(strings::group_anagrams({ "hello", "code", "cdeo", "ecod", "ecod", "ecod", "abc", "abc", "bac" }),
              std::set<std::set<std::string>>({ { "hello" }, { "cdeo", "ecod", "code" }, { "abc", "bac" } }));
}

} // namespace
