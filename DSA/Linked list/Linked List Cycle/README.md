# Linked List Cycle

## Problem

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

## Pattern

Linked list

## Idea

- Use Floyd's Cycle Detection
- Create two pointers slow and fast. Fast moves two steps at a time, while slow moves one step
- If there is a cycle in the list, slow and fast will definitely meet each other at some point
- Otherwise fast will reach nullptr

## Complexity

* Time: O(n)

* Space: O(1)

