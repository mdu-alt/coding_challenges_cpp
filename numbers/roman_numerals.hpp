#ifndef NUMBERS__ROMAN_NUMERALS
#define NUMBERS__ROMAN_NUMERALS

/**
 * @file
 */

#include <string>
#include <string_view>

namespace numbers {

/**
 * @brief Convert a string of roman numerals to a decimal number.
 *
 * @param[in] roman A string of roman numerals.
 *
 * @return A decimal representation of @p roman as a decimal number.<BR>
 * `-1` in case of an invalid input, such as:
 *     - invalid symbols (e.g. 'A', '3', '$')
 *     - too many symbols in a row (e.g. "IIII", "VV")
 *     - invalid subtract cases (e.g. "IIX", "IXI", "VL")
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
