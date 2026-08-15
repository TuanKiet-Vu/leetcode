# Sliding Window Maximum

## Problem
You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position.

Return the max sliding window.

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

## Pattern
- Sliding window

## Idea
### Deque structure
- Use a deque to store the indices of the potientially maximum value in the window
- We arrange the indices in the deque so that their corresponding values are in decreasing order
- The front index always points to the maximum value of the current window
### Remove from the back
- Remove the index at the deque's back while nums[dq.back] <= nums[i], as they can not become the maximum value of the window compared a higher and newer value (nums[i])
### Remove from the front
- The front index is outside of the window and become unsuable, so we remove it from the deque
- The front index  <= i-k is outside the window
### Result
- Reaching i>=k means a completed window has been formed
- Then we alwways add nums[dq.front()] to the result

## Complexity
- Time: O(n)
- Space: O(k) 




