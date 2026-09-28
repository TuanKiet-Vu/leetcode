# Binary Tree Right Side View

## Problem
Given the root of a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

## Pattern

Trees

## Idea
- Use queue to traverse each level
- Add the root to queue 
- Initialize an array level to store all the nodes in same level from left to right
- Traverse the queue until reach its exactly current size because we just process the current level
- Add the current node's value to level while remove it from the queue
- Append that node's left and right into the queue if it has children
- After finish processing the current level, add the last value of level to ans as the node that can be seen from the right view
- Return the array ans

## Complexity

Time complexity: O(n)

Space complexity: O(n)
