#include "nested_parentheses.hpp"

#include <stack>
#include <string_view>

namespace strings {

int count_parentheses_pairs(std::string_view string) noexcept
{
    std::stack<char> stack;
    int matches { 0 };

    for (auto&& ch : string) {
        if (ch == ')' && !stack.empty() && stack.top() == '(') {
            stack.pop();
            matches++;
        }
        else if (ch == '(') {
            stack.push(ch);
        }
    }

    return matches;
}

} // namespace strings
