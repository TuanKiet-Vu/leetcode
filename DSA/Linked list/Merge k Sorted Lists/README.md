# Merge k Sorted Lists

## Problem

You are given an array of k linked-lists lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

 

## Pattern

Linked list

## Idea
- divide function cuts half of the array until there's one element in the array
- merge function merges two linked lists in increasing order
### Process of merging
- We divide the array until l each subarray contains only one list.
- Then we merge these two list using the function which is alike merge two sorted lists leetcode, and return the head of the merged list
- Repeat that process, we merge these lists from the smallest subarrays until all lists are merged into one lists
## Complexity

* Time: O(N logk)

* Space: O(log k)




