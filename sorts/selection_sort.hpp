#ifndef SORTS__SELECTION_SORT_HPP
#define SORTS__SELECTION_SORT_HPP

/// @file

#include <vector>

namespace sorts {

///
/// @brief Perform a regular selection sort, in-place.
///
/// @param[in,out] vector An array of integers.
///
void selection(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
