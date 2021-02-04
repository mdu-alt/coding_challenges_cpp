#include "ascending_sublists.hpp"

#include <iterator>
#include <set>
#include <vector>

namespace sequences {

std::set<std::set<int>> ascending_sublists(std::vector<int> sequence) noexcept
{
    std::set<std::set<int>> sublists;

    auto left = sequence.cbegin();
    auto right = sequence.cbegin();

    for (auto i = sequence.cbegin(); i != sequence.cend(); ++i) {
        if (*i < *right) {
            if (std::distance(left, right) > 0) {
                sublists.insert(std::set<int>(left, right + 1));
            }

            left = i;
        }

        right = i;
    }

    if (std::distance(left, right) > 0) {
        sublists.insert(std::set<int>(left, right + 1));
    }

    return sublists;
}

} // namespace sequences
