#ifndef NUMBERS__LARGEST_BINARY_GAP_HPP
#define NUMBERS__LARGEST_BINARY_GAP_HPP

/**
 * @file
 */

namespace numbers {

/**
 * @brief Return the length of the largest binary gap of a positive integer.
 *
 * @remark A _binary gap_ of a positive integer is any maximal sequence of
 * consecutive zeros that is surrounded by ones in its binary representation.
 *
 * @param[in] n A positive integer (`n >= 0`).
 *
 * @return The length of the largest binary gap of @p n .
 */
int largest_binary_gap(int n) noexcept;

} // namespace numbers

#endif
