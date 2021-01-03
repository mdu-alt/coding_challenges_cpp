#ifndef SORTS__QUICK_SORT_HPP
#define SORTS__QUICK_SORT_HPP

/**
 * @file
 */

#include <vector>

namespace sorts {

/**
 * @brief Perform a regular quick sort, in-place.
 *
 * @param[in] vector A reference to a vector of integers.
 */
void quick_sort(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
