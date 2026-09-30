# Count Good Nodes In Binary Tree

## Problem
Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

Return the number of good nodes in the binary tree.

 

## Pattern

Trees

## Idea
- Use recursion to traverse all the nodes in the tree to count the number of good nodes
- Initialize the max value is root.val
- If the current node is higher than max value, update the max value to current node and set count to 1
- Then return count plus the number of good nodes on both side

## Complexity

Time complexity: O(n)

Space complexity: O(n)
