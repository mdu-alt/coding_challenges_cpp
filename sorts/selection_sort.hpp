#ifndef SORTS__SELECTION_SORT_HPP
#define SORTS__SELECTION_SORT_HPP

/**
 * @file
 */

#include <vector>

namespace sorts {

/**
 * @brief Perform a regular selection sort, in-place.
 *
 * @param[in] vector A reference to a vector of integers.
 */
void selection_sort(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
