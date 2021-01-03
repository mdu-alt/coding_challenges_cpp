#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "constants.hpp"
#include "merge_sort.hpp"

TEST(MergeSort, empty)
{
    std::vector<int> unsorted;
    std::vector<int> sorted { unsorted };

    merge_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(MergeSort, one_element)
{
    std::vector<int> unsorted { unsorted_1 };
    std::vector<int> sorted { unsorted };

    merge_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(MergeSort, ten_element)
{
    std::vector<int> unsorted { unsorted_10 };
    std::vector<int> sorted { unsorted };

    merge_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(MergeSort, fifty_element)
{
    std::vector<int> unsorted { unsorted_50 };
    std::vector<int> sorted { unsorted };

    merge_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(MergeSort, hundred_element)
{
    std::vector<int> unsorted { unsorted_100 };
    std::vector<int> sorted { unsorted };

    merge_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}
