#include <set>

#include <gtest/gtest.h>

#include "ascending_sublists.hpp"

namespace {

TEST(ascending_sublists, too_small)
{
    EXPECT_EQ(arrays::ascending_sublists({}), std::set<std::set<int>>({}));
    EXPECT_EQ(arrays::ascending_sublists({0}), std::set<std::set<int>>({}));
    EXPECT_EQ(arrays::ascending_sublists({1, 0}), std::set<std::set<int>>({}));
}

TEST(ascending_sublists, ascending_only)
{
    EXPECT_EQ(arrays::ascending_sublists({0, 1, 2, 3, 4}), std::set<std::set<int>>({{0, 1, 2, 3, 4}}));
    EXPECT_EQ(arrays::ascending_sublists({-2, -1, 0, 1, 2}), std::set<std::set<int>>({{-2, -1, 0, 1, 2}}));
}

TEST(ascending_sublists, descending_only)
{
    EXPECT_EQ(arrays::ascending_sublists({4, 3, 2, 1, 0}), std::set<std::set<int>>({}));
    EXPECT_EQ(arrays::ascending_sublists({2, 1, 0, -1, -2}), std::set<std::set<int>>({}));
}

TEST(ascending_sublists, duplicates)
{
    EXPECT_EQ(arrays::ascending_sublists({1, 2, 1, 2, 1, 2}), std::set<std::set<int>>({{1, 2}}));
    EXPECT_EQ(arrays::ascending_sublists({4, 5, 6, 4, 5, 6}), std::set<std::set<int>>({{4, 5, 6}}));
}

TEST(ascending_sublists, any)
{
    EXPECT_EQ(arrays::ascending_sublists({1, 3, 4, 4, 3, 6, 9, 1, 3}),
              std::set<std::set<int>>({{1, 3, 4}, {3, 6, 9}, {1, 3}}));

    EXPECT_EQ(arrays::ascending_sublists({1, -1, 2, 3, 4, 0, -2, 5, 0}),
              std::set<std::set<int>>({{-1, 2, 3, 4}, {-2, 5}}));

    EXPECT_EQ(arrays::ascending_sublists({6, 9, 2, 8, 7, 4, 7, 8, 4, 1}),
              std::set<std::set<int>>({{6, 9}, {2, 8}, {4, 7, 8}}));
}

} // namespace
