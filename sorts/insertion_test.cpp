#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "insertion.hpp"
#include "sorts.hpp"

namespace {

TEST(insertion, empty)
{
    std::vector<int> empty{sorts::empty};
    std::vector<int> reference{empty};

    sorts::insertion(empty);
    std::ranges::sort(reference);

    EXPECT_EQ(empty, reference);
}

TEST(insertion, all_equal)
{
    std::vector<int> all_equal{sorts::all_equal};
    std::vector<int> reference{all_equal};

    sorts::insertion(all_equal);
    std::ranges::sort(reference);

    EXPECT_EQ(all_equal, reference);
}

TEST(insertion, increasing_decreasing)
{
    {
        std::vector<int> increasing{sorts::increasing};
        std::vector<int> reference{increasing};

        sorts::insertion(increasing);
        std::ranges::sort(reference);

        EXPECT_EQ(increasing, reference);
    }
    {
        std::vector<int> decreasing{sorts::decreasing};
        std::vector<int> reference{decreasing};

        sorts::insertion(decreasing);
        std::ranges::sort(reference);

        EXPECT_EQ(decreasing, reference);
    }
}

TEST(insertion, any)
{
    {
        std::vector<int> any_1{sorts::any_1};
        std::vector<int> reference{any_1};

        sorts::insertion(any_1);
        std::ranges::sort(reference);

        EXPECT_EQ(any_1, reference);
    }
    {
        std::vector<int> any_5{sorts::any_5};
        std::vector<int> reference{any_5};

        sorts::insertion(any_5);
        std::ranges::sort(reference);

        EXPECT_EQ(any_5, reference);
    }
    {
        std::vector<int> any_10{sorts::any_10};
        std::vector<int> reference{any_10};

        sorts::insertion(any_10);
        std::ranges::sort(reference);

        EXPECT_EQ(any_10, reference);
    }
    {
        std::vector<int> any_20{sorts::any_20};
        std::vector<int> reference{any_20};

        sorts::insertion(any_20);
        std::ranges::sort(reference);

        EXPECT_EQ(any_20, reference);
    }
}

} // namespace
