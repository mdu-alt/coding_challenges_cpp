#include <limits>
#include <string>
#include <utility>
#include <vector>

#include <gtest/gtest.h>

#include "roman_numerals.hpp"

namespace {

struct roman_to_decimal_struct {
    std::string roman;
    int decimal;
};

TEST(roman_numerals, to_decimal__single_symbol)
{
    std::vector<roman_to_decimal_struct> test_cases {
        { "I", 1 },
        { "X", 10 },
        { "D", 500 },
        { "M", 1000 },
    };

    for (auto&& test_case : test_cases) {
        EXPECT_EQ(numbers::roman_to_decimal(test_case.roman), test_case.decimal);
    }
}

TEST(roman_numerals, to_decimal__many_symbols)
{
    std::vector<roman_to_decimal_struct> test_cases {
        { "VIII", 8 },
        { "XXII", 22 },
        { "DCLVI", 656 },
        { "MCLXVII", 1167 },
    };

    for (auto&& test_case : test_cases) {
        EXPECT_EQ(numbers::roman_to_decimal(test_case.roman), test_case.decimal);
    }
}

TEST(roman_numerals, to_decimal__subtract)
{
    std::vector<roman_to_decimal_struct> test_cases {
        { "IV", 4 },
        { "XIX", 19 },
        { "XLII", 42 },
        { "MMCM", 2900 },
    };

    for (auto&& test_case : test_cases) {
        EXPECT_EQ(numbers::roman_to_decimal(test_case.roman), test_case.decimal);
    }
}

TEST(roman_numerals, to_decimal__invalid)
{
    std::vector<roman_to_decimal_struct> test_cases {
        { "A", -1 }, { "IIII", -1 }, { "VV", -1 }, { "IIX", -1 }, { "IXI", -1 }, { "VX", -1 }, { "VIV", -1 },
    };

    for (auto&& test_case : test_cases) {
        EXPECT_EQ(numbers::roman_to_decimal(test_case.roman), test_case.decimal);
    }
}

// =====================================================================================================================

struct decimal_to_roman_struct {
    int decimal;
    std::string roman;
};

TEST(roman_numerals, to_numeral__valid)
{
    std::vector<decimal_to_roman_struct> test_cases {
        { 1, "I" },
        { 176, "CLXXVI" },
        { 345, "CCCXLV" },
        { 2489, "MMCDLXXXIX" },
        { 3888, "MMMDCCCLXXXVIII" },
        { 3999, "MMMCMXCIX" },
    };

    for (auto&& test_case : test_cases) {
        EXPECT_EQ(numbers::decimal_to_roman(test_case.decimal), test_case.roman);
    }
}

TEST(roman_numerals, to_numeral__invalid)
{
    std::vector<decimal_to_roman_struct> test_cases {
        { std::numeric_limits<int>::min(), "" },
        { 0, "" },
        { 4000, "" },
        { std::numeric_limits<int>::max(), "" },
    };

    for (auto&& test_case : test_cases) {
        EXPECT_EQ(numbers::decimal_to_roman(test_case.decimal), test_case.roman);
    }
}

} // namespace
