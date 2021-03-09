#ifndef NUMBERS__DIGITAL_ROOT
#define NUMBERS__DIGITAL_ROOT

/**
 * @file
 */

namespace numbers {

/**
 * @brief Compute the digital root of a positive integer.
 *
 * @remark The _digital root_ of a positive integer is the recursive sum of its
 * digits, until a single digit remains: e.g. `789 -> 7+8+9 = 24 -> 2+4 = 6`.
 *
 * @param[in] n A positive integer (`n >= 0`).
 *
 * @return The digital root of @p n .
 */
int digital_root(int n) noexcept;

} // namespace numbers

#endif
