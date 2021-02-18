#ifndef TREES__TRIE_HPP
#define TREES__TRIE_HPP

/**
 * @file
 */

#include <map>
#include <string_view>

namespace trees {

/**
 * @brief A trie node.
 *
 * Represent a (weighted) node within a trie structure.
 */
struct Trie_node final {
    int weight{0};
    std::map<char8_t, Trie_node> trie;
};

using Trie = std::map<char8_t, Trie_node>;

/**
 * @brief Insert a string into a trie.
 */
void insert(Trie& trie, std::string_view string);

/**
 * @brief Count the number of string matching the prefix @p string .
 */
int match(const Trie& trie, std::string_view string);

} // namespace trees

#endif
