#include "NestedParentheses.hpp"

#include <stack>

int nested_parentheses(const std::string& string) noexcept
{
    std::stack<char> stack;
    int count{ 0 };

    for (auto&& char_ : string) {
        if (char_ == ')' && !stack.empty() && stack.top() == '(') {
            stack.pop();
            count++;
        }
        else {
            stack.push(char_);
        }
    }

    return count;
}
