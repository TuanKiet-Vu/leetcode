# Lowest Common Ancestor of a Binary Search Tree

## Problem
Given a binary search tree (BST), find the lowest common ancestor (LCA) node of two given nodes in the BST.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”

## Pattern

Trees

## Idea
- Use binary search to find the ancestor of p and q
- If p.val and q.val are smaller than root.val, search on the left side
- If p.val and q.val are higher than root.val, search on the right side
- Else return root, that means root is descendant of p and q or that node is the decendants of itself
  

## Complexity

Time complexity: O(n)

Space complexity: O(n)
