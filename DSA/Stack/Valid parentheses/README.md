# Valid Parentheses

## Problem
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

## Pattern
Stack

## Idea
- Travese the input string
- Push all the open brackets onto the stack
- For closed brackets, check if it matches the bracket on the top of the stack
- If the character matches, pop the top from the stack; otherwise return false
- After traversing the string, return true if the stack is empty

## Complexity
Time: O(n)
Space: O(1)

