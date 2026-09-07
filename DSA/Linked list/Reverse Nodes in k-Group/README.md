# Reverse Nodes in k-Group

## Problem
Given the head of a linked list, reverse the nodes of the list k at a time, and return the modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should remain as it is.

You may not alter the values in the list's nodes, only nodes themselves may be changed.

 

## Pattern

Linked list

## Idea
- Size variable stores the number of the nodes. If that size is smaller than k, return NULL
- To keep track of the head of the linklist after modifying, we use dummy node linking to the head
- Count variable tracks the number of nodes processed in the current group
- Group stores the number of the groups that are albe to be reverse
- Countgroup tracks how many groups have been reverse
- When group = countgroup, we stop reversing node as the number of the remaining nodes is not enough to form a group
- TailPrev points to the tail of the previously reversed group, while tailcur points to head of the current group which becomes the tail after reversal
- The pointer cur points to the current node that we are working on while prev points to the node behind the current node

### Modifying process
- Traverse the linklist and reverse the nodes in the group
- When reach the head of a group (count = 0), set tailPrev pointing to previous group's tail and tailCur pointing to the head of the current group and prev = NULL
- When completing reverse a group (count = k), link tailPrev to the current node (the head of a new group) and reset count to 0 and increment group by 1
- If the number of the remaining nodes is smaller than k, link the previous group to these nodes without reversing them and break the lop
- Then return dummy.next
## Complexity

* Time: O(n)

* Space: O(1)




