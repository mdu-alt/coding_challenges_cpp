#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "constants.hpp"
#include "quick_sort.hpp"

TEST(QuickSort, empty)
{
    std::vector<int> unsorted;
    std::vector<int> sorted { unsorted };

    quick_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(QuickSort, one_element)
{
    std::vector<int> unsorted { unsorted_1 };
    std::vector<int> sorted { unsorted };

    quick_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(QuickSort, ten_element)
{
    std::vector<int> unsorted { unsorted_10 };
    std::vector<int> sorted { unsorted };

    quick_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(QuickSort, fifty_element)
{
    std::vector<int> unsorted { unsorted_50 };
    std::vector<int> sorted { unsorted };

    quick_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(QuickSort, hundred_element)
{
    std::vector<int> unsorted { unsorted_100 };
    std::vector<int> sorted { unsorted };

    quick_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}
