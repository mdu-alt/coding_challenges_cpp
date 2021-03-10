#ifndef SORTS__MERGE_HPP
#define SORTS__MERGE_HPP

/// @file

#include <vector>

namespace sorts {

///
/// @brief Perform a regular merge sort, in-place.
///
/// @param[in,out] vector An array of integers.
///
void merge(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
