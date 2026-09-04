# Reverse Nodes in k-Group

## Problem
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

## Pattern

Linked list

## Idea
### The process of adding two intergers
- Traverse these two list until reaching the end of any of them
- Add two numbers that cur1 and cur1 point to
- If there is a carry, add 1 to the sum
- If that sum >= 10, set carry = 1 and take ones digit of the sum
- Create a node the contain the sum and link it to the answer list
- Move both cur1 and cur2 by one step
### When one list is longer
- If not reaching the end of list1 or list2, repeat the above process to that list
- Add the carry to the nex value of the list
- If the result is 10 or greater, set carry = 1 and take the ones digit.
- Move the pointer one step forward after each node.
### After process both lists
- If there is still a carry, create a node containing 1 and link it
## Complexity

* Time: O(n)

* Space: O(1)




