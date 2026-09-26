# Binary Tree Level Order Traversal

## Problem
Given the root of a binary tree, return the level order traversal of its nodes' values. (i.e., from left to right, level by level).

## Pattern

Trees

## Idea
- Use Breadth-First Search (BFS) to traverse by level order
- Initialize a queue storing the root
- Run a loop until the queue is empty, that means we traversed all the nodes
- Create an array lv storing numbers at the same level
- Traverse the current level by getting through all the nodes of the current queue
- While append the node to lv, enqueue its left and right pointers if they are not none
- After process all the nodes of the current level, we append lv to ans which stores the level in increment order
- Finally, return ans as the answer

## Complexity

Time complexity: O(n)

Space complexity: O(n)
