#include "group_anagrams.hpp"

#include <algorithm>
#include <map>
#include <set>
#include <string>
#include <vector>

namespace strings {

std::set<std::set<std::string>> group_anagrams(const std::vector<std::string>& strings) noexcept
{
    std::map<std::string, std::set<std::string>> mapping;

    for (auto&& string : strings) {
        auto sorted = string;

        std::ranges::sort(sorted);

        mapping[sorted].insert(string);
    }

    std::set<std::set<std::string>> anagrams;

    for (auto&& [key, value] : mapping) {
        anagrams.insert(value);
    }

    return anagrams;
}

} // namespace strings
