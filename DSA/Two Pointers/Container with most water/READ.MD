# 15. 3Sum

# Problem

Given an integer array nums, return all the triplets such that...

**Difficulty:** Medium

---

## Pattern

- Two Pointers
- Sorting

---

## Idea

1. Sort the array.
2. Fix one number.
3. Use two pointers to find the remaining two numbers.
4. Skip duplicate values to avoid duplicate triplets.

---

## Complexity

Time: O(n²)

Space: O(1) (excluding the output)

---

## What I Learned

- Combining sorting with the two-pointer technique.
- Handling duplicate values correctly.
- Reducing time complexity from O(n³) to O(n²).

---

## Common Mistakes

- Forgot to skip duplicate values.
- Used the wrong pointer movement.
- Missed edge cases.

---

## Solution

See `solution.cpp`.
