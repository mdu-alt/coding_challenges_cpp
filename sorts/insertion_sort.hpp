#ifndef SORTS__INSERTION_SORT_HPP
#define SORTS__INSERTION_SORT_HPP

/**
 * @file
 */

#include <vector>

namespace sorts {

/**
 * @brief Perform a regular insertion sort, in-place.
 *
 * @param[in] vector A reference to a vector of integers.
 */
void insertion_sort(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
