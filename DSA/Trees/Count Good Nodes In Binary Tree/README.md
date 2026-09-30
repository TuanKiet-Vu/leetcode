# Count Good Nodes In Binary Tree

## Problem
Given a binary tree root, a node X in the tree is named good if in the path from root to X there are no nodes with a value greater than X.

Return the number of good nodes in the binary tree.

 

## Pattern

Trees

## Idea
- Use recursion to traverse all the nodes in the tree to count the number of good nodes
- Initialize a function DFS to carry out the below process
- If the current node is higher than max value, update the max value to current node and set count = 1 else count = 0
- Then return count plus the number of good nodes on both side
- Call that function and pass these values in to it which are root and rool.val as a max value

## Complexity

Time complexity: O(n)

Space complexity: O(n)
