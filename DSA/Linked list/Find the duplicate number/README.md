# Find the duplicate number

## Problem

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

## Pattern

Linked list

## Idea

- We will work with the array as a link list where the index is the node and the value is the next node
- The slow pointer moves one step at a time while the fast pointer moves two steps at a time.
- If there is a cylce in the link list, the fast and slow pointer will eventually meet each other
- After they meet each, we set the slow pointer to the head of the link list and move both of them 1 step until they meet
- The meeting point is the duplicate number

## Complexity

* Time: O(n)

* Space: O(1)


