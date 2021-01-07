#include "trees.hpp"

namespace trees {

Binary_node make_tree(std::string_view string)
{
    Binary_node root;
    std::stack<Binary_node*> nodes;
    Binary_node* last_node { nullptr };

    nodes.push(&root);

    for (auto&& ch : string) {
        // Left child
        if (ch == 'l' && !nodes.empty() && nodes.top()->left_child == nullptr) {
            last_node = new Binary_node;
            nodes.top()->left_child = last_node;
        }
        // Right child
        else if (ch == 'r' && !nodes.empty() && nodes.top()->right_child == nullptr) {
            last_node = new Binary_node;
            nodes.top()->right_child = last_node;
        }
        // Go down
        else if (ch == '(' && last_node != nullptr && !nodes.empty() && nodes.top() != last_node) {
            nodes.push(last_node);
        }
        // Go up
        else if (ch == ')' && !nodes.empty() && nodes.size() > 1) {
            nodes.pop();
        }
    }

    return root;
}

} // namespace trees
