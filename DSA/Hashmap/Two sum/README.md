# Two Sum

## Problem

Given an integer array `nums` and an integer `target`, return the indices of the two numbers such that they add up to `target`.

You may assume that each input has exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

## Pattern

* Hash Map

## Idea

1. Create an empty `unordered_map` to store each number and its index.
2. Traverse the array from left to right.
3. For each number:

   * Calculate the complement needed to reach the target:
     `complement = target - nums[i]`.
   * Check if the complement already exists in the hash map.
     * If it does, return the index of the complement and the current index.
     * Otherwise, store the current number and its index in the hash map.
4. Since the problem guarantees exactly one solution, the pair will eventually be found.

## Complexity

* Time: **O(n)**

  * Each element is visited once, and each hash map lookup and insertion takes **O(1)** on average.

* Space: **O(n)**

  * In the worst case, the hash map stores all elements before finding the solution.
