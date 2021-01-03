#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "constants.hpp"
#include "selection_sort.hpp"

TEST(SelectionSort, empty)
{
    std::vector<int> unsorted;
    std::vector<int> sorted { unsorted };

    selection_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(SelectionSort, one_element)
{
    std::vector<int> unsorted { unsorted_1 };
    std::vector<int> sorted { unsorted };

    selection_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(SelectionSort, ten_element)
{
    std::vector<int> unsorted { unsorted_10 };
    std::vector<int> sorted { unsorted };

    selection_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(SelectionSort, fifty_element)
{
    std::vector<int> unsorted { unsorted_50 };
    std::vector<int> sorted { unsorted };

    selection_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}

TEST(SelectionSort, hundred_element)
{
    std::vector<int> unsorted { unsorted_100 };
    std::vector<int> sorted { unsorted };

    selection_sort(unsorted);
    std::ranges::sort(sorted);

    ASSERT_EQ(unsorted, sorted);
}
