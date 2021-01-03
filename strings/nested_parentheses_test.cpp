#include <string>

#include <gtest/gtest.h>

#include "nested_parentheses.hpp"

namespace {

TEST(count_parentheses_pairs, empty)
{
    const std::string empty;

    EXPECT_EQ(strings::count_parentheses_pairs(empty), 0);
}

TEST(count_parentheses_pairs, positive)
{
    const std::string positive_1 { "()" };
    const std::string positive_2 { "a(b)c" };
    const std::string positive_3 { "(((())))" };
    const std::string positive_4 { "a(b(c(d(e)f)g)h)i" };

    EXPECT_EQ(strings::count_parentheses_pairs(positive_1), 1);
    EXPECT_EQ(strings::count_parentheses_pairs(positive_2), 1);
    EXPECT_EQ(strings::count_parentheses_pairs(positive_3), 4);
    EXPECT_EQ(strings::count_parentheses_pairs(positive_4), 4);
}

TEST(count_parentheses_pairs, zero)
{
    const std::string zero_1 { "))((" };
    const std::string zero_2 { "a)b)c(d(e" };

    EXPECT_EQ(strings::count_parentheses_pairs(zero_1), 0);
    EXPECT_EQ(strings::count_parentheses_pairs(zero_2), 0);
}

TEST(count_parentheses_pairs, positive_complex)
{
    const std::string positive_complex_1 { ")(()()))())(" };
    const std::string positive_complex_2 { "a)b(c(d)e(f)g)h)i(j)k)l(m" };

    EXPECT_EQ(strings::count_parentheses_pairs(positive_complex_1), 4);
    EXPECT_EQ(strings::count_parentheses_pairs(positive_complex_2), 4);
}

} // namespace
