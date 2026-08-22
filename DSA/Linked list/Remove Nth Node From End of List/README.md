# Remove Nth Node From End of List

## Problem

Given the head of a linked list, remove the nth node from the end of the list and return its head

## Pattern

Linked list

## Idea

- Create node dummy pointing to the head
- Create two pointers, fast = head and slow = dummy
- Fast runs n nodes faster than slow, then we move these two nodes step by step while fast != NULL
- Slow will point to the node before the one that is required to be elimated when fast reaches the end
- After finding required node, deleting the targer node (slow->next = slow->next->next)
- Return dummy.next as the new head to ensure that we can return the list after deleting the head node

## Complexity

* Time: O(n)

* Space: O(1)




