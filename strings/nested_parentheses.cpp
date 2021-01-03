#include "nested_parentheses.hpp"

#include <stack>
#include <string_view>

namespace strings {

int count_parentheses_pairs(std::string_view string) noexcept
{
    std::stack<char> stack;
    int count { 0 };

    for (auto&& ch : string) {
        if (ch == ')' && !stack.empty() && stack.top() == '(') {
            stack.pop();
            count++;
        }
        else if (ch == '(') {
            stack.push(ch);
        }
    }

    return count;
}

} // namespace strings
