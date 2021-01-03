#ifndef NUMBERS__LARGEST_BINARY_GAP_HPP
#define NUMBERS__LARGEST_BINARY_GAP_HPP

/**
 * @file
 */

namespace numbers {

/**
 * @brief Return the length of the largest binary gap of a number.
 *
 * <BLOCKQUOTE>A _binary gap_ of a integer `N` is any maximal sequence of
 * consecutive zeros that is surrounded by ones in the binary representation of
 * `N`.</BLOCKQUOTE>
 *
 * @param[in] n An integer.
 *
 * @return The length of the largest binary gap in @p n.
 */
int largest_binary_gap(int n) noexcept;

} // namespace numbers

#endif
