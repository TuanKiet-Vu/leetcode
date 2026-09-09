# Find Minimum In Rotated Sorted Array

## Problem
Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

[4,5,6,7,0,1,2] if it was rotated 4 times.
[0,1,2,4,5,6,7] if it was rotated 7 times.
Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

You must write an algorithm that runs in O(log n) time.

## Pattern

Binary search

## Idea
- Set left to the first index while right to the last index
- Traverse the array until left = right. At this point, nums[left] or nums[right] is both the minimum value
- If nums[mid] < nums[right], set right = mid.  Because nums[mid] may be the smallest, we do not set it to mid-1 to avoid missing the answer
- IF nums[mid] > nums[right], set left = mid + 1. The answer must be on the right side except nums[mid] in this case so we can skip this value

## Complexity

Time complexity: O(log n)

Space complexity: O(1)
