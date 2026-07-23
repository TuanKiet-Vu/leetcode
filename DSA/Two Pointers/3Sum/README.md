# 3Sum

## Problem

Given an integer array `nums`, return all the unique triplets `[nums[i], nums[j], nums[k]]` such that:

* `i != j`
* `i != k`
* `j != k`
* `nums[i] + nums[j] + nums[k] == 0`

The solution set must not contain duplicate triplets.

## Pattern

* Sorting
* Two Pointers

## Idea

1. Sort the array in ascending order.
2. Iterate through the array and fix one number `nums[i]`.
3. Skip duplicate values of `nums[i]` to avoid duplicate triplets.
4. Use two pointers:

   * `left` starts at `i + 1`.
   * `right` starts at the end of the array.
5. Compute the sum of the three numbers.

   * If the sum is less than `0`, move `left` to increase the sum.
   * If the sum is greater than `0`, move `right` to decrease the sum.
   * If the sum equals `0`, store the triplet, then move both pointers and skip duplicate values.
6. Repeat until `left` meets `right`.

## Complexity

* Time: **O(n²)**

  * Sorting takes `O(n log n)`.
  * The outer loop runs `n` times, and the two pointers together scan the remaining elements in `O(n)`, resulting in `O(n²)` overall.
* Space: **O(1)** 

