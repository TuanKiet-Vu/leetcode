# Construct Binary Tree From Preorder And Inorder Traversal

## Problem
Given two integer arrays preorder and inorder where preorder is the preorder traversal of a binary tree and inorder is the inorder traversal of the same tree, construct and return the binary tree.

## Pattern

Trees

## Idea
- Initialize a hasp map to store the index of each value in array inorder, so we can search for each value's position with O(1) time 
- Define a build function to construct a tree
- Base case: if l<r, return None.
- Cur traversing array preorder from left to right, starting at 0
- Create a tree node storing preorder[cur] as a root of subtree
- Use hashmap to find the index of preorder[cur] in array inorder, and store it to m
- As every node in range l to m-1 is on the left side, so we recursively call build(l,m-1) and link the result to the root of subtree
- As every node in range m+1 to r is on the right side, so we recursively call build(m+1,r) and link the result to the root of subtree
- Call the function tree and 

## Complexity

Time complexity: O(n)

Space complexity: O(n)
