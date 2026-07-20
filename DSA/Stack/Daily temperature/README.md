# Daily temperature

## Problem
Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

 
## Pattern
- Stack

## Approach 1
- Traverse the temperature array.
- Use a stack to store the index of the temperatures that have not found the warmer temperature
- If the current temperature is higher the one on the top stack, update the answer of that top by taking the current index - top and then pop it
- Push the current index onto the stack
- The temperature with no warmer days, so the answer is 0
## Complexity
- Time : O(n)
- Space : O(n)




