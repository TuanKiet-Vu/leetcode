# Diameter of Binary Tree

## Problem
Given the root of a binary tree, return the length of the diameter of the tree.

The diameter of a binary tree is the length of the longest path between any two nodes in a tree. This path may or may not pass through the root.

The length of a path between two nodes is represented by the number of edges between them.

 

## Pattern

Trees

## Idea
- If the root is none, we return 0
- Use recursion to perform the below process
- Set maxLeft to the height of left side, similarly to right side
- return the higher side plus the current node
### Method of finding the height:
- Recursively call the function to figure out the height of the left and right side
- Plus 1 to the higher side

### Main idea:
- Use the same method as finding out the height of the tree
- But at each node, we need to calculate the diameter by right + left
- Then set it to diameter if it is longer than the previous one

## Complexity

Time complexity: O(n)

Space complexity: O(h)
