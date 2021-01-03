#include <stack>
#include <string_view>

#include <gtest/gtest.h>

#include "BinaryTreeHeight.hpp"

Node make_tree(std::string_view tree_string)
{
    Node root_node;
    std::stack<Node*> nodes;
    Node* last_node{ nullptr };

    nodes.push(&root_node);

    for (char c : tree_string) {
        // Left child
        if (c == 'l' && !nodes.empty() && nodes.top()->left_child == nullptr) {
            last_node = new Node;
            nodes.top()->left_child = last_node;
        }
        // Right child
        else if (c == 'r' && !nodes.empty() && nodes.top()->right_child == nullptr) {
            last_node = new Node;
            nodes.top()->right_child = last_node;
        }
        // Descend
        else if (c == '(' && last_node != nullptr && !nodes.empty() && nodes.top() != last_node) {
            nodes.push(last_node);
        }
        // Ascend
        else if (c == ')' && !nodes.empty() && nodes.size() > 1) {
            nodes.pop();
        }
    }

    return root_node;
}

// =====================================================================================================================

TEST(BinaryTreeHeight, empty)
{
    Tree tree{ make_tree("") };

    ASSERT_EQ(binary_tree_height(&tree), 0);
}

TEST(BinaryTreeHeight, simple_left)
{
    Tree tree_1{ make_tree("l") };
    Tree tree_2{ make_tree("l(l(l(l)))") };

    ASSERT_EQ(binary_tree_height(&tree_1), 1);
    ASSERT_EQ(binary_tree_height(&tree_2), 4);
}

TEST(BinaryTreeHeight, simple_right)
{
    Tree tree_1{ make_tree("r") };
    Tree tree_2{ make_tree("r(r(r(r)))") };

    ASSERT_EQ(binary_tree_height(&tree_1), 1);
    ASSERT_EQ(binary_tree_height(&tree_2), 4);
}

TEST(BinaryTreeHeight, balanced)
{
    Tree tree_1{ make_tree("lr") };
    Tree tree_2{ make_tree("l(lr)r(lr)") };
    Tree tree_3{ make_tree("l(l(lr)r(lr))r(l(lr)r(lr))") };

    ASSERT_EQ(binary_tree_height(&tree_1), 1);
    ASSERT_EQ(binary_tree_height(&tree_2), 2);
    ASSERT_EQ(binary_tree_height(&tree_3), 3);
}

TEST(BinaryTreeHeight, slalom)
{
    Tree tree{ make_tree("l(l(r(l(l(r)))))") };

    ASSERT_EQ(binary_tree_height(&tree), 6);
}

TEST(BinaryTreeHeight, any)
{
    Tree tree{ make_tree("l(lr(lr))r(r(l(lr)))") };

    ASSERT_EQ(binary_tree_height(&tree), 4);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}
