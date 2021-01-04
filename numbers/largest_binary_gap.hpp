#ifndef NUMBERS__LARGEST_BINARY_GAP_HPP
#define NUMBERS__LARGEST_BINARY_GAP_HPP

/**
 * @file
 */

namespace numbers {

/**
 * @brief Return the length of the largest binary gap of a natural number.
 *
 * @remark A _binary gap_ of a natural number `n` is any maximal sequence of
 * consecutive zeros that is surrounded by ones in the binary representation of
 * `n`.
 *
 * @param[in] n A natural number.
 *
 * @return The length of the largest binary gap of @p n.<BR>
 * `-1` if @p n is negative.
 */
int largest_binary_gap(int n) noexcept;

} // namespace numbers

#endif
