# Search In Rotated Sorted Array

## Problem
There is an integer array nums sorted in ascending order (with distinct values).

Prior to being passed to your function, nums is possibly left rotated at an unknown index k (1 <= k < nums.length) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,5,6,7] might be left rotated by 3 indices and become [4,5,6,7,0,1,2].

Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.

You must write an algorithm with O(log n) runtime complexity.

## Pattern

Binary search

## Idea
- findbreak function can find the rotation point (pivot) of the array
- Binary search finds the target within the range from left to right with O log(n) time
- We need to find the rotated point, which divides the array into two increment subarrays
- Then using binary_search to find the target on left side of the pivot. If the target is not found, continue on the right side
- When the target is not in the array, return -1

## Complexity

Time complexity: O(log n)

Space complexity: O(1)
