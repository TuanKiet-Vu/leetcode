# Serialize And Deserialize Binary Tree

## Problem


## Pattern

Trees

## Idea
### Serial process
- Return "null" if the input tree is empty. We do not return None as the requirement for the result jmusst be a string
- Initialize  a list (s) to store node values and null
- Use queue storing the address of each node,
- Dequeue the front of the queue as x
- Append it's childs to s from left to right, if they does not exist, append "null"
- Add these childs to queue from left to right if they exist
- Repeat the above process until the queue is empty
- Join the elements of s with ',' and return string
### Deserial process
- If there is no nodes, return []
- Transform the string input into an interger array (nodes) storing all the nodes of the tree or None if it is "null"
- Use queue to build a complete tree with nodes in its original position
- Set i = 1 to track the child of each node
- Dequeue the front node node
- If i is within bound and nodes[i] exists, create a treenode, link it to node as a left child and enqueue it
- Move i by 1 to the right child
- If i is within bound and nodes[i] exists, create a treenode, link it to node as a right child and enqueue it
- Move i by 1 to the next node's child
- Repeat the above process until the queue is empty
- Return the root of the tree

## Complexity

Time complexity: serialize() O(n), deserialize O(n)

Space complexity: serialize() O(n), deserialize O(n)
