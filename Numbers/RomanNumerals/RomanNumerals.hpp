#ifndef ROMAN_NUMERAL
#define ROMAN_NUMERAL

#include <string>
#include <string_view>

/**
 * @file
 * @brief
 */

/**
 * @brief Convert a string of roman numerals into decimal.
 */
int roman_to_decimal(std::string_view roman) noexcept;

/**
 *
 */
std::string decimal_to_roman(int decimal) noexcept;

#endif
