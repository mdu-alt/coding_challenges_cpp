#include <algorithm>
#include <vector>

#include <gtest/gtest.h>

#include "../Utility.hpp"
#include "BubbleSort.hpp"

TEST(BubbleSort, empty)
{
    std::vector<int> unsorted;
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(bubble_sort(unsorted), sorted);
}

TEST(BubbleSort, one_element)
{
    std::vector<int> unsorted{ unsorted_1 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(bubble_sort(unsorted), sorted);
}

TEST(BubbleSort, ten_element)
{
    std::vector<int> unsorted{ unsorted_10 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(bubble_sort(unsorted), sorted);
}

TEST(BubbleSort, fifty_element)
{
    std::vector<int> unsorted{ unsorted_50 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(bubble_sort(unsorted), sorted);
}

TEST(BubbleSort, hundred_element)
{
    std::vector<int> unsorted{ unsorted_100 };
    std::vector<int> sorted{ unsorted };

    std::ranges::sort(sorted);

    ASSERT_EQ(bubble_sort(unsorted), sorted);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
