#ifndef ROMAN_NUMERAL
#define ROMAN_NUMERAL

/**
 * @file
 */

#include <string>
#include <string_view>

namespace numbers {

/**
 * @brief Convert a string of roman numerals into decimal.
 *
 * TODO
 */
int roman_to_decimal(std::string_view roman) noexcept;

/**
 * @brief TODO
 */
std::string decimal_to_roman(int decimal) noexcept;

} // namespace numbers

#endif
