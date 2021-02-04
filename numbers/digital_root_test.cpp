#include <limits>

#include <gtest/gtest.h>

#include "digital_root.hpp"

namespace {

TEST(digital_root, any)
{
    EXPECT_EQ(numbers::digital_root(0), 0);
    EXPECT_EQ(numbers::digital_root(5), 5);
    EXPECT_EQ(numbers::digital_root(39), 3);
    EXPECT_EQ(numbers::digital_root(871), 7);
    EXPECT_EQ(numbers::digital_root(5642), 8);
    EXPECT_EQ(numbers::digital_root(123456789), 9);
}

TEST(digital_root, invalid)
{
    EXPECT_EQ(numbers::digital_root(-1), -1);
    EXPECT_EQ(numbers::digital_root(std::numeric_limits<int>::min()), -1);
}

} // namespace
