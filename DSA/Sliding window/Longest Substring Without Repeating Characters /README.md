#  Longest Substring Without Repeating Characters

## Problem
Given a string s, find the length of the longest substring without duplicate characters.
## Pattern

- Sliding window

## Idea

- Initialize an integer array to store the last seen index of each character
- Set all the values to -1
- Traverse the string
- Move the left pointer after its previous occurence if the character is already in the window
- Update the last seen index of the current character
- Update the maximum length of the current window

## Complexity

- Time : O(n)
- Space : O(1)


