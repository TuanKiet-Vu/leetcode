# Two Sum II - Input Array Is Sorted

## Problem

Given a **1-indexed** array of integers `numbers` that is already sorted in **non-decreasing order**, find two numbers such that they add up to a specific `target`.

Return the indices of the two numbers (1-indexed) as an integer array of length 2.

It is guaranteed that there is exactly one solution, and you may not use the same element twice.

## Pattern

* Two Pointers

## Idea

1. Initialize two pointers:

   * `left` at the beginning of the array.
   * `right` at the end of the array.
2. Compute the sum of `numbers[left]` and `numbers[right]`.
3. Compare the sum with the target.

   * If the sum equals the target, return the two indices (`left + 1`, `right + 1`).
   * If the sum is smaller than the target, move `left` to the right to increase the sum.
   * If the sum is greater than the target, move `right` to the left to decrease the sum.
4. Repeat until the correct pair is found.

## Complexity

* Time: **O(n)**

  * Each pointer moves at most `n` times, so the array is traversed only once.
* Space: **O(1)**

  * Only two pointers are used, requiring constant extra space.

