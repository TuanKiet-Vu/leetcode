# Invert Binary Tree

## Problem
Given the root of a binary tree, invert the tree, and return its root.

## Pattern

Trees

## Idea
- Use recursion to invert the tree
- Firstly, swap the two pointer left and right of the root
- Then, recursively invert all the nodes on the both sides

## Complexity

Time complexity: O(n)

Space complexity: O(h) h is the height of the tree
