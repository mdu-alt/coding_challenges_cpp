#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "sorts.hpp"
#include "quick_sort.hpp"

namespace {

TEST(quick_sort, empty)
{
    std::vector<int> empty;
    std::vector<int> reference { empty };

    sorts::quick_sort(empty);
    std::ranges::sort(reference);

    EXPECT_EQ(empty, reference);
}

TEST(quick_sort, one)
{
    std::vector<int> unsorted_1 { sorts::unsorted_1 };
    std::vector<int> reference { unsorted_1 };

    sorts::quick_sort(unsorted_1);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_1, reference);
}

TEST(quick_sort, ten)
{
    std::vector<int> unsorted_10 { sorts::unsorted_10 };
    std::vector<int> reference { unsorted_10 };

    sorts::quick_sort(unsorted_10);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_10, reference);
}

TEST(quick_sort, fifty)
{
    std::vector<int> unsorted_50 { sorts::unsorted_50 };
    std::vector<int> reference { unsorted_50 };

    sorts::quick_sort(unsorted_50);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_50, reference);
}

TEST(quick_sort, hundred)
{
    std::vector<int> unsorted_100 { sorts::unsorted_100 };
    std::vector<int> reference { unsorted_100 };

    sorts::quick_sort(unsorted_100);
    std::ranges::sort(reference);

    EXPECT_EQ(unsorted_100, reference);
}

} // namespace
