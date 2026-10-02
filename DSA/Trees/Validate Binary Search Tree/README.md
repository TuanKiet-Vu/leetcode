# Validate Binary Search Tree

## Problem
Given the root of a binary tree, determine if it is a valid binary search tree (BST).

A valid BST is defined as follows:

The left subtree of a node contains only nodes with keys strictly less than the node's key.
The right subtree of a node contains only nodes with keys strictly greater than the node's key.
Both the left and right subtrees must also be binary search trees.

## Pattern

Trees

## Idea
Main idea: all nodes have to be within the range of (low,high) indentifed by their ancestors
- Traverse recursively the tree and start at the root which is within range (-inf,+inf) as there still no constraints
- Check on the left side: all the nodes on this side have to smaller than root, so we update high = root.val
- Check on the right side: all the nodes on this side have to higher than root, so we update low = root.val
- If any node is not in the range from low to high (low<root.val<high), return false
- Return true for an empty node

## Complexity

Time complexity: O(n)

Space complexity: O(n)
