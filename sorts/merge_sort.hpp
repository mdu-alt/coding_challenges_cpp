#ifndef SORTS__MERGE_SORT_HPP
#define SORTS__MERGE_SORT_HPP

/**
 * @file
 */

#include <vector>

namespace sorts {

/**
 * @brief Perform a regular merge sort, in-place.
 *
 * @param[in,out] vector A reference to a vector of integers.
 */
void merge_sort(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
