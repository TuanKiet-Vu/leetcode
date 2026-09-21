# Balanced Binary Tree

## Problem
Given a binary tree, determine if it is height-balanced.

## Pattern

Trees

## Idea
- Traverse the tree to find it's height
- To determine if the subtrees is balanced by abs(right-left); If it's not balanced return -1
- If the height of the left or right side of the subtree is -1, return -1 immediately as the final answer (the tree is not balanced)
- Otherwise return the subtree's height
- Finally, if height(root)!= -1, the tree is balanced



## Complexity

Time complexity: O(n)

Space complexity: O(n)
