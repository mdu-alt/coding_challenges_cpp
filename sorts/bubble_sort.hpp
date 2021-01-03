#ifndef SORTS__BUBBLE_SORT_HPP
#define SORTS__BUBBLE_SORT_HPP

/**
 * @file
 */

#include <vector>

namespace sorts {

/**
 * @brief Perform a regular bubble sort, in-place.
 *
 * @param[in] vector A reference to a vector of integers.
 */
void bubble_sort(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
