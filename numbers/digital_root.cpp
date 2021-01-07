#include "digital_root.hpp"

namespace numbers {

int digital_root(int k) noexcept
{
    if (k < 0) {
        return -1;
    }

    while (k / 10 != 0) {
        int l { 0 };

        while (k != 0) {
            l += k % 10;
            k /= 10;
        }

        k = l;
    }

    return k;
}

} // namespace numbers
