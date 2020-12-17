#include "NestedParentheses.hpp"

#include <stack>

int count_pairs(std::string_view string) noexcept
{
    std::stack<char> stack;
    int count{ 0 };

    for (auto&& ch : string) {
        if (ch == ')' && !stack.empty() && stack.top() == '(') {
            stack.pop();
            count++;
        }
        else {
            stack.push(ch);
        }
    }

    return count;
}

// =====================================================================================================================

int count_orphan(std::string_view string) noexcept
{
    return string.size() - 2 * count_pairs(string);
}
