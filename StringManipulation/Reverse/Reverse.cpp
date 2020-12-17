#include "Reverse.hpp"

void reverse(std::string& string) noexcept
{
    auto middle = string.begin();
    std::advance(middle, string.size() / 2);

    auto i = string.begin();
    auto j = string.rbegin();

    while (i != middle) {
        std::iter_swap(i, j);

        ++i;
        ++j;
    }
}
