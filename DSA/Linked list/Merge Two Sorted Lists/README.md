# Merge Two Sorted Lists

## Problem

You are given the heads of two sorted linked lists list1 and list2.

Merge the two lists into one sorted list. The list should be made by splicing together the nodes of the first two lists.

Return the head of the merged linked list.

## Pattern

Linked list

## Idea

- Create a dummy node ans to simplify the merging process.
- Use a pointer cur to keep track of the last node in the merged list.
- Compare the values of list1 and list2.
- Attach the node with the smaller value to cur->next, then move that list pointer forward.
- Continue until one of the lists becomes empty.
- Attach the remaining nodes from the non-empty list to the merged list.
- Return ans.next because ans is only a dummy node..

## Complexity

* Time: O(n+m)

* Space: O(1)



