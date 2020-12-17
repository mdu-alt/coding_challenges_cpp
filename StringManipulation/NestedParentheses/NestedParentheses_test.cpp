#include <string>

#include <gtest/gtest.h>

#include "NestedParentheses.hpp"

TEST(NestedParentheses, empty_string)
{
    const std::string string;

    ASSERT_EQ(count_pairs(string), 0);
    ASSERT_EQ(count_orphan(string), 0);
}

TEST(NestedParentheses, single_nest)
{
    const std::string string{ "()" };

    ASSERT_EQ(count_pairs(string), 1);
    ASSERT_EQ(count_orphan(string), 0);
}

TEST(NestedParentheses, multi_nest)
{
    const std::string string{ "(((())))" };

    ASSERT_EQ(count_pairs(string), 4);
    ASSERT_EQ(count_orphan(string), 0);
}

TEST(NestedParentheses, no_nest)
{
    const std::string string{ "))((" };

    ASSERT_EQ(count_pairs(string), 0);
    ASSERT_EQ(count_orphan(string), 4);
}

TEST(NestedParentheses, complex_nest)
{
    const std::string string{ ")(()()))())(" };

    ASSERT_EQ(count_pairs(string), 4);
    ASSERT_EQ(count_orphan(string), 4);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
