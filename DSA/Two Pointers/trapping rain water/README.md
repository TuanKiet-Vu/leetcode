# Container with most water

## Problem
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

## Pattern
Two Pointers

## Idea
- Initialize two pointers at both sides of the array.
- Process the pointer (l or r) with the shorter height.
- Update the maximum column at the selected side.
- Add the amount of trapped water at the current position.
- Move the current pointer inward.
- Repeat that process until l>=r.

## Complexity
Time: O(n)
Space: O(1)
