# Permutation in String
## Problem
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

## Pattern
- Sliding window

## Idea
- Use two arrays of size 26 to count the the frequency of each character in two given strings
- Travese the string s2 using sliding window of the size of string s1's length
- Check if the frequency of each character in string s1 is equal to the corresponding ones in string s2, return true; otherwise continue the sliding window
- Move the window by one position while decreasing the frequency of the character on the left side  by 1 and increasing the frequency
of the new character by one
- If no permutation of s1 is found after checking all windows, return false

## Complexity
- Time: O(n x m)
- Space: O(1) 




