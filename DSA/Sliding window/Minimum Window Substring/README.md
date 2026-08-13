# Minimum Window Substring

## Problem
Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.

## Pattern
- Sliding window

## Idea
### 1. Count how many distinctly required characters in t
- Use an array mp to store the frequency of each character in t
- Required represents the number of distinct characters that need to be included
### 2. Expand the window
- Move the pointer (right) from left to right and use sFreq to count the frequency of each character in s
- If the frequency of the current character reach its target (mp), increment formed
- When formed = required, the current window includes all the required characters
### 3. Shrink the window
- When all characters are contained in the window, shink it to remove unnessary characters
- Before moving the pointer left, update the minimum size of the window with (start) as first posion of the string and (minlen) as the length of string
- If the window is invalid after removing a character (on the left side), decrement formed
, then keep expanding

## Complexity
- Time: O(n+m)
- Space: O(1) 




