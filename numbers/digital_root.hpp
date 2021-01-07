#ifndef NUMBERS__DIGITAL_ROOT
#define NUMBERS__DIGITAL_ROOT

/**
 * @file
 */

namespace numbers {

/**
 * @brief Finds the digital root of a natural number.
 *
 * @remark The _digital root_ is the recursive sum of a number's digit, until a
 * single digit is obtained: e.g. `128 -> 11 -> 2`.
 *
 * @param[in] k A natural number.
 *
 * @return The digital root of @p k.
 * @return `-1` if @p k is negative.
 */
int digital_root(int k) noexcept;

} // namespace numbers

#endif
