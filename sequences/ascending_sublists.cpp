#include "ascending_sublists.hpp"

#include <iterator>
#include <set>
#include <vector>

namespace sequences {

std::set<std::set<int>> ascending_sublists(std::vector<int> sequence) noexcept
{
    std::set<std::set<int>> output;

    auto left = sequence.cbegin();
    auto right = sequence.cbegin();

    for (auto i = sequence.cbegin(); i != sequence.cend(); ++i) {
        if (*i < *right) {
            if (0 < std::distance(left, right)) {
                output.insert({ left, right + 1 });
            }

            left = i;
        }

        right = i;
    }

    if (0 < std::distance(left, right)) {
        output.insert({ left, right + 1 });
    }

    return output;
}

} // namespace sequences
