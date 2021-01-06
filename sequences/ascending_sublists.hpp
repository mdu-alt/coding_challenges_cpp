#ifndef SEQUENCES__ASCENDING_SUBLISTS
#define SEQUENCES__ASCENDING_SUBLISTS

/**
 * @file
 */

#include <set>
#include <vector>

namespace sequences {

/**
 * @brief Return all maximal ascending sublists found in a sequence of
 * integers.
 *
 * @param[in] sequence A sequence of integers.
 *
 * @note Duplicated sublists will be merged, and they will contain at least two
 * elements. @p sequence may be sorted or unsorted.
 *
 * @return All ascending sublists found in @p sequence.
 */
std::set<std::set<int>> ascending_sublists(std::vector<int> sequence) noexcept;

} // namespace sequences

#endif
