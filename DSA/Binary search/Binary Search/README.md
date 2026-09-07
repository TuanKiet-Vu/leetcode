# Binary search

## Problem

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

## Pattern

Binary search

## Idea

- We use two pointers, left and right, to represent the current search range.
- We calculate mid using left + (right - left) / 2 to avoid integer overflow.
- If nums[mid] == target, we have found the target, so we return mid.
- If nums[mid] > target, the target must be on the left side because the array is sorted, so we recursively search from left to mid - 1.
- If nums[mid] < target, the target must be on the right side, so we recursively search from mid + 1 to right.
- If left > right, there are no elements left to search, so we return -1.

## Complexity

* Time: O(log n)

* Space: O(1)


