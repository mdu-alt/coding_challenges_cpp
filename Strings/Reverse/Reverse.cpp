#include "Reverse.hpp"

void reverse(std::string& string) noexcept
{
    auto i = string.begin();
    auto j = string.end() - 1;

    while (std::distance(i, j) > 0) {
        std::iter_swap(i, j);

        ++i;
        --j;
    }
}
