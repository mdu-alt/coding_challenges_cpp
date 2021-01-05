#include <gtest/gtest.h>

#include "binary_tree_height.hpp"
#include "trees.hpp"

TEST(binary_tree_height, empty)
{
    trees::Binary_tree tree { trees::make_tree("") };

    EXPECT_EQ(trees::binary_tree_height(&tree), 0);
}

TEST(binary_tree_height, left_only)
{
    trees::Binary_tree tree_1 { trees::make_tree("l") };
    trees::Binary_tree tree_2 { trees::make_tree("l(l(l(l)))") };

    EXPECT_EQ(trees::binary_tree_height(&tree_1), 1);
    EXPECT_EQ(trees::binary_tree_height(&tree_2), 4);
}

TEST(binary_tree_height, right_only)
{
    trees::Binary_tree tree_1 { trees::make_tree("r") };
    trees::Binary_tree tree_2 { trees::make_tree("r(r(r(r)))") };

    EXPECT_EQ(trees::binary_tree_height(&tree_1), 1);
    EXPECT_EQ(trees::binary_tree_height(&tree_2), 4);
}

TEST(binary_tree_height, perfect)
{
    trees::Binary_tree tree_1 { trees::make_tree("lr") };
    trees::Binary_tree tree_2 { trees::make_tree("l(lr)r(lr)") };
    trees::Binary_tree tree_3 { trees::make_tree("l(l(lr)r(lr))r(l(lr)r(lr))") };

    EXPECT_EQ(trees::binary_tree_height(&tree_1), 1);
    EXPECT_EQ(trees::binary_tree_height(&tree_2), 2);
    EXPECT_EQ(trees::binary_tree_height(&tree_3), 3);
}

TEST(binary_tree_height, degenerate)
{
    trees::Binary_tree tree { trees::make_tree("l(l(r(l(l(r)))))") };

    EXPECT_EQ(trees::binary_tree_height(&tree), 6);
}

TEST(binary_tree_height, any)
{
    trees::Binary_tree tree { trees::make_tree("l(lr(lr))r(r(l(lr)))") };

    EXPECT_EQ(trees::binary_tree_height(&tree), 4);
}
