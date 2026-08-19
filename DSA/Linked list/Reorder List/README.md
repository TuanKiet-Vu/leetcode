# Reorder List

## Problem

You are given the head of a singly linked-list. The list can be represented as:

L0 → L1 → … → Ln - 1 → Ln
Reorder the list to be on the following form:

L0 → Ln → L1 → Ln - 1 → L2 → Ln - 2 → …
You may not modify the values in the list's nodes. Only nodes themselves may be changed.
## Pattern

Linked list

## Idea

### Solve this problem with 3 steps
#### Step 1: find the middle of the list
- Use two pointers slow and fast
- Fast can move 2 steps at a time and  slow  only moves 1 step
- When the  fast nearly reaches the end, now slow will point to the middle
#### Step 2: reverse the second list
- Before revesing the second list, we need to cut list into two halves
- Save the next node (nxt) of the pointer cur. By that, we can keep the process if the next address of the cur is changed
- Cur->next = prev: reverse the link direction.
- Prev = cur: moving the pointer prev to the node that needs to be pointed by the next node
- Cur = nxt: continuing the reverse process at that position (nxt)
#### Step 3: merge these two lists
- first = head (the head of the 1st half) , second = prev (the head of the 2nd half)
- tmp1 = first->next, tmp2 = second->next: save the rest of the list
- first->next = second, second->next = tmp1: we are merging with these two lines
- Move first = tmp1 and second = tmp2 to continue.

## Complexity

* Time: O(n)

* Space: O(1)




