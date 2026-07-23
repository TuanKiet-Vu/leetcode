# Largest rectangle in histogram

## Problem
Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.
 
## Pattern
- Stack

## Approach 
- Use a monotonic increasing stack to store index ordered by increasing heights
- Traverse every bar in the histogram. Add a virtual bar with height 0 to ensure pop all the remaining bars and compute the largest rectangle
- If the stack is not empty or the current bar is shorter or equal than the height at the top of the stack, pop it and calculate the max rectangle with height of popped bar's height and width = width = current index - left boundary - 1
- Push index onto the stack after process all the taller bars or there's no shorter bars

## Complexity
- Time : O(n)
- Space : O(n)






