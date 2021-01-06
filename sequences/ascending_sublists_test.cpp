#include <set>
#include <vector>

#include <gtest/gtest.h>

#include "ascending_sublists.hpp"

namespace {

TEST(ascending_sublists, too_small)
{
    std::vector<int> too_small_1;
    std::vector<int> too_small_2 { 0 };
    std::vector<int> too_small_3 { 1, 0 };

    std::set<std::set<int>> result;

    EXPECT_EQ(sequences::ascending_sublists(too_small_1), result);
    EXPECT_EQ(sequences::ascending_sublists(too_small_2), result);
    EXPECT_EQ(sequences::ascending_sublists(too_small_3), result);
}

TEST(ascending_sublists, ascending_only)
{
    std::vector<int> ascending_only_1 { 0, 1, 2, 3, 4 };
    std::vector<int> ascending_only_2 { -2, -1, 0, 1, 2 };

    std::set<std::set<int>> result_1 { { 0, 1, 2, 3, 4 } };
    std::set<std::set<int>> result_2 { { -2, -1, 0, 1, 2 } };

    EXPECT_EQ(sequences::ascending_sublists(ascending_only_1), result_1);
    EXPECT_EQ(sequences::ascending_sublists(ascending_only_2), result_2);
}

TEST(ascending_sublists, descending_only)
{
    std::vector<int> descending_only_1 { 4, 3, 2, 1, 0 };
    std::vector<int> descending_only_2 { 2, 1, 0, -1, -2 };

    std::set<std::set<int>> result;

    EXPECT_EQ(sequences::ascending_sublists(descending_only_1), result);
    EXPECT_EQ(sequences::ascending_sublists(descending_only_2), result);
}

TEST(ascending_sublists, duplicates)
{
    std::vector<int> duplicates { 1, 2, 1, 2, 1, 2 };

    std::set<std::set<int>> result { { 1, 2 } };

    EXPECT_EQ(sequences::ascending_sublists(duplicates), result);
}

TEST(ascending_sublists, any)
{
    std::vector<int> any_1 { 1, 3, 4, 4, 3, 6, 9, 1, 3 };
    std::vector<int> any_2 { 1, -1, 2, 3, 4, 0, -2, 5, 0 };
    std::vector<int> any_3 { 6, 9, 2, 8, 7, 4, 7, 8, 4, 1 };

    std::set<std::set<int>> result_1 { { 1, 3, 4 }, { 3, 6, 9 }, { 1, 3 } };
    std::set<std::set<int>> result_2 { { -1, 2, 3, 4 }, { -2, 5 } };
    std::set<std::set<int>> result_3 { { 6, 9 }, { 2, 8 }, { 4, 7, 8 } };

    EXPECT_EQ(sequences::ascending_sublists(any_1), result_1);
    EXPECT_EQ(sequences::ascending_sublists(any_2), result_2);
    EXPECT_EQ(sequences::ascending_sublists(any_3), result_3);
}

} // namespace
