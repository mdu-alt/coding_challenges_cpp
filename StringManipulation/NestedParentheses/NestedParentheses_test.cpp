#include <string>

#include <gtest/gtest.h>

#include "NestedParentheses.hpp"

TEST(NestedParentheses, empty_string)
{
    std::string string;

    ASSERT_EQ(nested_parentheses(string), 0);
}

TEST(NestedParentheses, one_nest)
{
    std::string string{ "()" };

    ASSERT_EQ(nested_parentheses(string), 1);
}

TEST(NestedParentheses, multi_nest)
{
    std::string string{ "(((())))" };

    ASSERT_EQ(nested_parentheses(string), 4);
}

TEST(NestedParentheses, no_nest)
{
    std::string string{ "))((" };

    ASSERT_EQ(nested_parentheses(string), 0);
}

TEST(NestedParentheses, complex_string)
{
    std::string string{ ")(()()))())(" };

    ASSERT_EQ(nested_parentheses(string), 4);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
