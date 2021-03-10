#ifndef SORTS__INSERTION_SORT_HPP
#define SORTS__INSERTION_SORT_HPP

/// @file

#include <vector>

namespace sorts {

///
/// @brief Perform a regular insertion sort, in-place.
///
/// @param[in,out] vector An array of integers.
///
void insertion(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
