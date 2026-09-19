# Maximum Depth of Binary Tree

## Problem
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Pattern

Trees

## Idea
- If the root is none, we return 0
- Use recursion to perform the below process
- Set maxLeft to the height of left side, similarly to right side
- return the higher side plus the current node

## Complexity

Time complexity: O(n)

Space complexity: O(h)
