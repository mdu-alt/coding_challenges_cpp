#ifndef GROUP_ANAGRAMS
#define GROUP_ANAGRAMS

#include <set>
#include <string>
#include <vector>

using Word_list = std::vector<std::string>;
using Groupings = std::vector<std::set<std::string>>;

Groupings group_anagrams(const Word_list& word_list) noexcept;

#endif
