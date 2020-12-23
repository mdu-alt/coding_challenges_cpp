#include <string>
#include <utility>

#include <gtest/gtest.h>

#include "RomanNumerals.hpp"

TEST(RomanNumeral, to_decimal__single_char)
{
    std::pair roman_I { "I", 1 };
    std::pair roman_X { "X", 10 };
    std::pair roman_D { "D", 500 };

    EXPECT_EQ(roman_to_decimal(roman_I.first), roman_I.second);
    EXPECT_EQ(roman_to_decimal(roman_X.first), roman_X.second);
    EXPECT_EQ(roman_to_decimal(roman_D.first), roman_D.second);
}

TEST(RomanNumeral, to_decimal__multi_char)
{
    std::pair roman_VI { "VI", 6 };
    std::pair roman_XXII { "XXII", 22 };
    std::pair roman_MCLXVII { "MCLXVII", 1167 };

    EXPECT_EQ(roman_to_decimal(roman_VI.first), roman_VI.second);
    EXPECT_EQ(roman_to_decimal(roman_XXII.first), roman_XXII.second);
    EXPECT_EQ(roman_to_decimal(roman_MCLXVII.first), roman_MCLXVII.second);
}

TEST(RomanNumeral, to_decimal__subtract)
{
    std::pair roman_IV { "IV", 4 };
    std::pair roman_XIX { "XIX", 19 };
    std::pair roman_MMCM { "MMCM", 2900 };

    EXPECT_EQ(roman_to_decimal(roman_IV.first), roman_IV.second);
    EXPECT_EQ(roman_to_decimal(roman_XIX.first), roman_XIX.second);
    EXPECT_EQ(roman_to_decimal(roman_MMCM.first), roman_MMCM.second);
}

TEST(RomanNumeral, to_decimal__incorrect)
{
    std::pair roman_A { "A", -1 };
    std::pair roman_IIII { "IIII", -1 };
    std::pair roman_VV { "VV", -1 };
    std::pair roman_IIX { "IIX", -1 };
    std::pair roman_IXI { "IXI", -1 };
    std::pair roman_VX { "VX", -1 };
    std::pair roman_IL { "IL", -1 };

    EXPECT_EQ(roman_to_decimal(roman_A.first), roman_A.second);
    EXPECT_EQ(roman_to_decimal(roman_IIII.first), roman_IIII.second);
    EXPECT_EQ(roman_to_decimal(roman_VV.first), roman_VV.second);
    EXPECT_EQ(roman_to_decimal(roman_IIX.first), roman_IIX.second);
    EXPECT_EQ(roman_to_decimal(roman_IXI.first), roman_IXI.second);
    EXPECT_EQ(roman_to_decimal(roman_VX.first), roman_VX.second);
    EXPECT_EQ(roman_to_decimal(roman_IL.first), roman_IL.second);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
