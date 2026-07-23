# Contains Duplicate

## Problem

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

## Pattern

* Hash Set

## Idea

1. Create an empty `unordered_set` to store the numbers that have already been seen.
2. Iterate through each element in the array.
3. For each number:

   * If it already exists in the hash set, return `true` because a duplicate has been found.
   * Otherwise, insert the number into the hash set.
4. If the entire array is traversed without finding any duplicates, return `false`.

## Complexity

* Time: **O(n)**

  * Each lookup and insertion in the hash set takes **O(1)** on average, so all `n` elements are processed once.
* Space: **O(n)**

  * In the worst case, all elements are unique and stored in the hash set.

