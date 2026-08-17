# Reverse Linked List

## Problem

Given the head of a singly linked list, reverse the list, and return the reversed list.

## Pattern

-Linked list

## Idea

For each node:

Save the next node.
Reverse cur->next to point to prev.
Move prev and cur forward.

## Complexity

* Time: O(n)

* Space: O(1)

  * Additional space is used for the sorted copies of the strings.

