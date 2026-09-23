# Subtree of Another Tree

## Problem
Given the roots of two binary trees root and subRoot, return true if there is a subtree of root with the same structure and node values of subRoot and false otherwise.

A subtree of a binary tree tree is a tree that consists of a node in tree and all of this node's descendants. The tree tree could also be considered as a subtree of itself.

## Pattern

Trees

## Idea
- Firstly, we need to set the array A containing all the nodes in root with node-left-right order
- Similarly, set array B storing subtree
- We assume the pointed none as "#" 
- Then, check if the array B is in A, return True; Otherwise, return False

## Complexity

Time complexity: O(n*m)

Space complexity: O(n+m)
