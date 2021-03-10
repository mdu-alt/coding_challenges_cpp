#ifndef ARRAYS__ASCENDING_SUBLISTS
#define ARRAYS__ASCENDING_SUBLISTS

/**
 * @file
 */

#include <set>
#include <vector>

namespace arrays {

/**
 * @brief Return all maximal ascending sublists found in a sequence of
 * integers.
 *
 * @param[in] sequence A sequence of `[0..n]` integers.
 *
 * @return All ascending sublists found in @p sequence. A sublist will contain
 * at least two elements.
 */
std::set<std::set<int>> ascending_sublists(std::vector<int> sequence) noexcept;

} // namespace arrays

#endif
