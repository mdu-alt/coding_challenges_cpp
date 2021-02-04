#ifndef NUMBERS__LARGEST_BINARY_GAP_HPP
#define NUMBERS__LARGEST_BINARY_GAP_HPP

/**
 * @file
 */

namespace numbers {

/**
 * @brief Find the length of the largest binary gap of a positive integer.
 *
 * @remark A _binary gap_ of a positive integer `n` is any maximal sequence of
 * consecutive zeros that is surrounded by ones in the binary representation of
 * `n`.
 *
 * @param[in] n A positive integer.
 *
 * @return The length of the largest binary gap of @p n.
 * @return `-1` if @p n is negative.
 */
int largest_binary_gap(int n) noexcept;

} // namespace numbers

#endif
