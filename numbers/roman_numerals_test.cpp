#include <string>
#include <utility>

#include <gtest/gtest.h>

#include "roman_numerals.hpp"

namespace {

TEST(roman_numerals, to_decimal__single_char)
{
    std::pair roman_1 { "I", 1 };
    std::pair roman_2 { "X", 10 };
    std::pair roman_3 { "D", 500 };

    EXPECT_EQ(numbers::roman_to_decimal(roman_1.first), roman_1.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_2.first), roman_2.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_3.first), roman_3.second);
}

TEST(roman_numerals, to_decimal__multi_char)
{
    std::pair roman_1 { "VI", 6 };
    std::pair roman_2 { "XXII", 22 };
    std::pair roman_3 { "MCLXVII", 1167 };

    EXPECT_EQ(numbers::roman_to_decimal(roman_1.first), roman_1.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_2.first), roman_2.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_3.first), roman_3.second);
}

TEST(roman_numerals, to_decimal__subtract)
{
    std::pair roman_1 { "IV", 4 };
    std::pair roman_2 { "XIX", 19 };
    std::pair roman_3 { "MMCM", 2900 };

    EXPECT_EQ(numbers::roman_to_decimal(roman_1.first), roman_1.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_2.first), roman_2.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_3.first), roman_3.second);
}

TEST(roman_numerals, to_decimal__incorrect)
{
    std::pair roman_1 { "A", -1 };
    std::pair roman_2 { "IIII", -1 };
    std::pair roman_3 { "VV", -1 };
    std::pair roman_4 { "IIX", -1 };
    std::pair roman_5 { "IXI", -1 };
    std::pair roman_6 { "VX", -1 };
    std::pair roman_7 { "IL", -1 };

    EXPECT_EQ(numbers::roman_to_decimal(roman_1.first), roman_1.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_2.first), roman_2.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_3.first), roman_3.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_4.first), roman_4.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_5.first), roman_5.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_6.first), roman_6.second);
    EXPECT_EQ(numbers::roman_to_decimal(roman_7.first), roman_7.second);
}

} // namespace
