# Binary Tree Maximum Path Sum

## Problem


## Pattern

Trees

## Idea
- Initialize a ans variale to  keep the max path while traversing the tree
- find function traverses recursively through the tree
- Base case: return 0 it is an empty node
- left and right store the maximum path sums that can be linked the the current node on both side
- Update ans by root.val+left+right. That means check if the path passes through the current node is the longest path
- Return the longest child path to the parent node


## Complexity

Time complexity: O(n)

Space complexity: O(h)
