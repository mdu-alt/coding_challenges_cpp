# Binary tree height

## Context
A **binary tree** is a tree data structure in which each node has at most two children, which are referred to as the
_left child_ and the _right child_.

![Binary tree](./BinaryTree.png)

A _path_ in a binary tree is a non-empty sequence of nodes that one can traverse by following the edges. The _length_
of a path is the number of edges it traverses. The _height_ of a binary tree is defined as the length of the longest
possible path in the tree. In particular, a tree consisting of only one node has height 0.

For example, the tree shown in the above figure is of height 3.

## Goal
Write a function that, given a non-empty binary tree `T` consisting of N nodes, returns its height.
```c++
int binary_tree_height(Tree* T);
```

## Constraints
- Focus: <ins>efficiency</ins>
- N is an integer within the range \[1 .. 1'000\]
- The height of tree T is within the range \[0 .. 500\]

## Examples
```c++
/**
 * For such a tree:
 *   O
 *  / \
 * O   O
 */
binary_tree_height(T) == 1;

/**
 * For such a tree:
 *     O
 *    / \
 *   O   \-O
 *  / \     \
 * O   O     O
 *      \   / \
 *       O O   O
 */
binary_tree_height(T) == 3;
```
