#ifndef NUMBERS__DIGITAL_ROOT
#define NUMBERS__DIGITAL_ROOT

/**
 * @file
 */

namespace numbers {

/**
 * @brief Finds the digital root of a positive integer.
 *
 * @remark The _digital root_ of a positive integer is the recursive sum of the
 * number's digits, until a single digit is obtained: e.g. `128 -> 11 -> 2`.
 *
 * @param[in] n A positive integer.
 *
 * @return The digital root of @p n.
 * @return `-1` if @p n is negative.
 */
int digital_root(int n) noexcept;

} // namespace numbers

#endif
