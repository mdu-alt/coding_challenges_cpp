#ifndef BINARY_TREE_HEIGHT_HPP
#define BINARY_TREE_HEIGHT_HPP

struct Node final {
    Node* left_child{ nullptr };
    Node* right_child{ nullptr };

    ~Node() { delete left_child, right_child; }
};

using Tree = Node;

int binary_tree_height(Tree* T) noexcept;

#endif
