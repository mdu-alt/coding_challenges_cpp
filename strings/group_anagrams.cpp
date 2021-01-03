#include "group_anagrams.hpp"

#include <algorithm>
#include <set>
#include <string>
#include <unordered_map>
#include <vector>

namespace strings {

std::set<std::set<std::string>> group_anagrams(const std::vector<std::string>& word_list) noexcept
{
    std::unordered_map<std::string, std::set<std::string>> word_anagrams;

    for (auto&& word : word_list) {
        auto sorted_word = word;

        std::ranges::sort(sorted_word);

        word_anagrams[sorted_word].insert(word);
    }

    std::set<std::set<std::string>> anagrams;

    for (auto&& [key, value] : word_anagrams) {
        anagrams.insert(value);
    }

    return anagrams;
}

} // namespace strings
