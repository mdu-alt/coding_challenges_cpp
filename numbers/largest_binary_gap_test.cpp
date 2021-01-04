#include <gtest/gtest.h>

#include "largest_binary_gap.hpp"

namespace {

TEST(largest_binary_gap, any_gaps)
{
    EXPECT_EQ(numbers::largest_binary_gap(5), 1);  //  5 = 0b101
    EXPECT_EQ(numbers::largest_binary_gap(9), 2);  //  9 = 0b1001
    EXPECT_EQ(numbers::largest_binary_gap(17), 3); // 17 = 0b10001

    EXPECT_EQ(numbers::largest_binary_gap(20), 1);         //         20 = 0b10100
    EXPECT_EQ(numbers::largest_binary_gap(2546), 2);       //       2546 = 0b100111110010
    EXPECT_EQ(numbers::largest_binary_gap(1376796946), 5); // 1376796946 = 0b1010010000100000100000100010010
}

TEST(largest_binary_gap, no_gaps)
{
    EXPECT_EQ(numbers::largest_binary_gap(3), 0);  //  3 = 0b11
    EXPECT_EQ(numbers::largest_binary_gap(12), 0); // 12 = 0b1100
    EXPECT_EQ(numbers::largest_binary_gap(16), 0); // 16 = 0b10000
}

TEST(largest_binary_gap, extremes)
{
    EXPECT_EQ(numbers::largest_binary_gap(0), 0);             // 0 = 0b0
    EXPECT_EQ(numbers::largest_binary_gap(2'147'483'647), 0); // 2'147'483'647 = 0b1111111111111111111111111111111
}

TEST(largest_binary_gap, invalid)
{
    EXPECT_EQ(numbers::largest_binary_gap(-1), -1);
}

} // namespace
