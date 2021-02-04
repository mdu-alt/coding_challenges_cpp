#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "merge_sort.hpp"
#include "sorts.hpp"

namespace {

TEST(merge_sort, empty)
{
    std::vector<int> empty;
    std::vector<int> reference { empty };

    sorts::merge_sort(empty);
    std::ranges::sort(reference);

    EXPECT_EQ(empty, reference);
}

TEST(merge_sort, one)
{
    std::vector<int> unsorted_1 { sorts::unsorted_1 };
    std::vector<int> reference { unsorted_1 };

    sorts::merge_sort(unsorted_1);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_1, reference);
}

TEST(merge_sort, ten)
{
    std::vector<int> unsorted_10 { sorts::unsorted_10 };
    std::vector<int> reference { unsorted_10 };

    sorts::merge_sort(unsorted_10);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_10, reference);
}

TEST(merge_sort, fifty)
{
    std::vector<int> unsorted_50 { sorts::unsorted_50 };
    std::vector<int> reference { unsorted_50 };

    sorts::merge_sort(unsorted_50);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_50, reference);
}

TEST(merge_sort, hundred)
{
    std::vector<int> unsorted_100 { sorts::unsorted_100 };
    std::vector<int> reference { unsorted_100 };

    sorts::merge_sort(unsorted_100);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_100, reference);
}

} // namespace
