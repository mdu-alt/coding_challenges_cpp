#ifndef SORTS__BUBBLE_HPP
#define SORTS__BUBBLE_HPP

/// @file

#include <vector>

namespace sorts {

///
/// @brief Perform a regular bubble sort, in-place.
///
/// @param[in,out] vector An array of integers.
///
void bubble(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
