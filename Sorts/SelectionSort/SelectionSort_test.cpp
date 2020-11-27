#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "../Utility.hpp"
#include "SelectionSort.hpp"

TEST(SelectionSort, empty)
{
    std::vector<int> unsorted;
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

TEST(SelectionSort, one_element)
{
    std::vector<int> unsorted{ unsorted_1 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

TEST(SelectionSort, ten_element)
{
    std::vector<int> unsorted{ unsorted_10 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

TEST(SelectionSort, fifty_element)
{
    std::vector<int> unsorted{ unsorted_50 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

TEST(SelectionSort, hundred_element)
{
    std::vector<int> unsorted{ unsorted_100 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
