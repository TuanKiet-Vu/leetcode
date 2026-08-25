# Copy List with Random Pointer

## Problem

A linked list of length n is given such that each node contains an additional random pointer, which could point to any node in the list, or null.

Construct a deep copy of the list. The deep copy should consist of exactly n brand new nodes, where each new node has its value set to the value of its corresponding original node. Both the next and random pointer of the new nodes should point to new nodes in the copied list such that the pointers in the original list and copied list represent the same list state. None of the pointers in the new list should point to nodes in the original list.

For example, if there are two nodes X and Y in the original list, where X.random --> Y, then for the corresponding two nodes x and y in the copied list, x.random --> y.

Return the head of the copied linked list.

The linked list is represented in the input/output as a list of n nodes. Each node is represented as a pair of [val, random_index] where:

val: an integer representing Node.val
random_index: the index of the node (range from 0 to n-1) that the random pointer points to, or null if it does not point to any node.
Your code will only be given the head of the original linked list.

## Pattern

Linked list

## Idea
- We can use hash map to link the copy node to the correct random node, but requires O(n) space
- Better approuch having O(1) space : interweaving the copy node into the original list
  Original: A → B → C
  After interweaving: A → A' → B → B' → C → C'
- That means each original node points to its copy version
- We copy the random pointers based on original nodes; Therefore cur->next->random = cur->random->next (cur always point at the original node)
- Finally, separate the two lists. Restore the original list and extract the copy nodes into an dependent list
## Complexity

* Time: O(n)

* Space: O(1)


