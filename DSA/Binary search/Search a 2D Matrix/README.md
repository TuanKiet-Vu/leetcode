# Search a 2D Matrix

## Problem

You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.



## Pattern

Binary search

## Idea
### Find the row
- First of all, we need to find which row contains the target using binary search
- If the target is smaller than the firt value of the middle row, searching on the left side
- If the target is bigger than the last value , searching on the right side
- Else that row may contain the target
### Find the column
- Using binary search to find the target within that row

## Complexity

* Time: O(log n+m)

* Space: O(1)



