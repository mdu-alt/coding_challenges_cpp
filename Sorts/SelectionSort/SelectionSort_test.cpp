#include <algorithm>
#include <numeric>
#include <random>
#include <utility>
#include <vector>

#include <gtest/gtest.h>

#include "../Utility.hpp"
#include "SelectionSort.hpp"

TEST(SelectionSort, empty)
{
    auto [sorted, unsorted] = make_vectors(0);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

TEST(SelectionSort, one_element)
{
    auto [sorted, unsorted] = make_vectors(1);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

TEST(SelectionSort, ten_element)
{
    auto [sorted, unsorted] = make_vectors(10);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

TEST(SelectionSort, fifty_element)
{
    auto [sorted, unsorted] = make_vectors(50);

    ASSERT_EQ(selection_sort(unsorted), sorted);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
