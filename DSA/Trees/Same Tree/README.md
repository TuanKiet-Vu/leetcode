# Same Tree

## Problem
Given the roots of two binary trees p and q, write a function to check if they are the same or not.

Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.

## Pattern

Trees

## Idea
- Traverse all the nodes in both trees with the same way
- If the current node of p or q is none and p == q, return true; otherwise, return false
- At each node, checking whether the value of the two corresponding node is the same, and whether the left and right side is also the same
- If all conditions are satisfied, return true

## Complexity

Time complexity: O(n)

Space complexity: O(n)
