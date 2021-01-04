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
 * @brief Convert a decimal number to a string of roman numerals.
 *
 * @param[in] decimal A decimal number.
 *
 * @return A string representation of @p decimal as roman numerals.<BR>
 * An empty string if the input decimal is out of the range `[1..3999]`.
 */
std::string decimal_to_roman(int decimal) noexcept;

} // namespace numbers

#endif
