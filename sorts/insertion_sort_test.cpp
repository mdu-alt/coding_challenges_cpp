#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "constants.hpp"
#include "insertion_sort.hpp"

TEST(InsertionSort, empty)
{
    std::vector<int> unsorted;
    std::vector<int> sorted { unsorted };

    insertion_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(InsertionSort, one_element)
{
    std::vector<int> unsorted { unsorted_1 };
    std::vector<int> sorted { unsorted };

    insertion_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(InsertionSort, ten_element)
{
    std::vector<int> unsorted { unsorted_10 };
    std::vector<int> sorted { unsorted };

    insertion_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(InsertionSort, fifty_element)
{
    std::vector<int> unsorted { unsorted_50 };
    std::vector<int> sorted { unsorted };

    insertion_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(InsertionSort, hundred_element)
{
    std::vector<int> unsorted { unsorted_100 };
    std::vector<int> sorted { unsorted };

    insertion_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}
