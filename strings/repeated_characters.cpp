#include "repeated_characters.hpp"

#include <string>
#include <string_view>
#include <unordered_set>

namespace strings {

std::string remove_repeated_characters(std::string_view string)
{
    std::unordered_set<char> unique;
    std::string output;

    for (auto&& ch : string) {
        if (!unique.contains(ch)) {
            output += ch;
        }

        unique.insert(ch);
    }

    return output;
}

} // namespace strings
