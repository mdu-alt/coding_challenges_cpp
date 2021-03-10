#ifndef SORTS__HEAP_HPP
#define SORTS__HEAP_HPP

/// @file

#include <vector>

namespace sorts {

///
/// @brief Perform a regular heap sort, in place.
///
/// @param[in,out] vector An array of integers.
///
void heap(std::vector<int>& vector) noexcept;

} // namespace sorts

#endif
