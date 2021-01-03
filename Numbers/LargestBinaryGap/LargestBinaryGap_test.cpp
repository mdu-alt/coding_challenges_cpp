#include <gtest/gtest.h>

#include "LargestBinaryGap.hpp"

TEST(LargestBinaryGap, has_gap)
{
    ASSERT_EQ(largest_binary_gap(5), 1);  //  5 = 0b101
    ASSERT_EQ(largest_binary_gap(9), 2);  //  9 = 0b1001
    ASSERT_EQ(largest_binary_gap(17), 3); // 17 = 0b10001

    ASSERT_EQ(largest_binary_gap(20), 1);         //         20 = 0b10100
    ASSERT_EQ(largest_binary_gap(2546), 2);       //       2546 = 0b100111110010
    ASSERT_EQ(largest_binary_gap(1376796946), 5); // 1376796946 = 0b1010010000100000100000100010010
}

TEST(LargestBinaryGap, no_gap)
{
    ASSERT_EQ(largest_binary_gap(3), 0);  //  3 = 0b11
    ASSERT_EQ(largest_binary_gap(12), 0); // 12 = 0b1100
    ASSERT_EQ(largest_binary_gap(16), 0); // 16 = 0b10000
}

TEST(LargestBinaryGap, lower_bound)
{
    ASSERT_EQ(largest_binary_gap(1), 0); // 1 = 0b1
}

TEST(LargestBinaryGap, upper_bound)
{
    ASSERT_EQ(largest_binary_gap(2'147'483'647), 0); // 2'147'483'647 = 0b1111111111111111111111111111111
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
