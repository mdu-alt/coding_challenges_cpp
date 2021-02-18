#include "trie.hpp"

#include <string>
#include <string_view>
#include <vector>

namespace trees {

void insert(Trie& trie, std::string_view string)
{
    Trie* p{&trie};

    for (auto&& ch : string) {
        (*p)[ch].weight++;

        p = &p->at(ch).trie;
    }
}

int match(const Trie& trie, std::string_view string)
{
    const Trie* p_t{&trie};
    const Trie_node* p_n{nullptr};

    for (auto&& ch : string) {
        if (!p_t->contains(ch)) {
            return 0;
        }

        p_n = &p_t->at(ch);
        p_t = &p_n->trie;
    }

    if (p_n != nullptr) {
        return p_n->weight;
    }

    return 0;
}

} // namespace trees
