#ifndef SORTS__QUICK_HPP
#define SORTS__QUICK_HPP

/// @file

#include <vector>

namespace sorts {

///
/// @brief Perform a regular quick sort, in-place.
///
/// @param[in,out] vector An array of integers.
///
void quick(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
