#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "merge_sort.hpp"
#include "sorts.hpp"

namespace {

TEST(merge_sort, empty)
{
    std::vector<int> empty { sorts::empty };
    std::vector<int> reference { empty };

    sorts::merge_sort(empty);
    std::ranges::sort(reference);

    EXPECT_EQ(empty, reference);
}

TEST(merge_sort, all_equal)
{
    std::vector<int> all_equal { sorts::all_equal };
    std::vector<int> reference { all_equal };

    sorts::merge_sort(all_equal);
    std::ranges::sort(reference);

    EXPECT_EQ(all_equal, reference);
}

TEST(merge_sort, increasing_decreasing)
{
    {
        std::vector<int> increasing { sorts::increasing };
        std::vector<int> reference { increasing };

        sorts::merge_sort(increasing);
        std::ranges::sort(reference);

        EXPECT_EQ(increasing, reference);
    }
    {
        std::vector<int> decreasing { sorts::decreasing };
        std::vector<int> reference { decreasing };

        sorts::merge_sort(decreasing);
        std::ranges::sort(reference);

        EXPECT_EQ(decreasing, reference);
    }
}

TEST(merge_sort, any)
{
    {
        std::vector<int> any_1 { sorts::any_1 };
        std::vector<int> reference { any_1 };

        sorts::merge_sort(any_1);
        std::ranges::sort(reference);

        EXPECT_EQ(any_1, reference);
    }
    {
        std::vector<int> any_5 { sorts::any_5 };
        std::vector<int> reference { any_5 };

        sorts::merge_sort(any_5);
        std::ranges::sort(reference);

        EXPECT_EQ(any_5, reference);
    }
    {
        std::vector<int> any_10 { sorts::any_10 };
        std::vector<int> reference { any_10 };

        sorts::merge_sort(any_10);
        std::ranges::sort(reference);

        EXPECT_EQ(any_10, reference);
    }
    {
        std::vector<int> any_20 { sorts::any_20 };
        std::vector<int> reference { any_20 };

        sorts::merge_sort(any_20);
        std::ranges::sort(reference);

        EXPECT_EQ(any_20, reference);
    }
}

} // namespace
