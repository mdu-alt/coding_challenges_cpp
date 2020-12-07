#include "GroupAnagrams.hpp"

#include <algorithm>
#include <map>

Groupings group_anagrams(const Word_list& word_list) noexcept
{
    std::unordered_map<std::string, std::set<std::string>> hash_table;

    for (auto&& word : word_list) {
        auto sorted_word = word;

        std::sort(sorted_word.begin(), sorted_word.end());

        hash_table[sorted_word].insert(word);
    }

    Groupings output;

    for (auto&& [key, value] : hash_table) {
        output.push_back(value);
    }

    return output;
}
