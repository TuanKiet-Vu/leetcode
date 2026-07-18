# Min stack

## Problem
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

Implement the MinStack class:

MinStack() initializes the stack object.
void push(int value) pushes the element value onto the stack.
void pop() removes the element on the top of the stack.
int top() gets the top element of the stack.
int getMin() retrieves the minimum element in the stack.
You must implement a solution with O(1) time complexity for each function.

## Pattern
- Stack

## Approach 1
- Initialize two stacks (main stack and min stack)
- With push function: push value onto the min stack if it is smaller than the top value; otherwise push the top again
## Approach 2
- Initialize a stack and an integer valuable Curmin
- In the push function: if the value is higher than or equal Curmin, push it onto the stack; otherwise push the encoded value (2*value - Curmin)
- Update Curmin when encounter the smaller number
- In the pop function: Update the min when pop the encoded number
- In top function, if the top value is encoded, return curMin; otherwise, return the top value.
## Complexity
- push(): O(1)
- pop(): O(1)
- top(): O(1)
- getMin(): O(1)

- Space: O(n) 



