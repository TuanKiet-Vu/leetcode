# Evaluate Reverse Polish Notation

## Problem
You are given an array of strings tokens that represents an arithmetic expression in a Reverse Polish Notation.

Evaluate the expression. Return an integer that represents the value of the expression.

## Pattern
Stack

## Idea
- Traverse the input array of strings
- Push the integer onto the stack if the current string is an integer
- Compute the top two integers using corresponding operator; then push the result back onto the stack

## Complexity
Time: O(n)
Space: O(n)

