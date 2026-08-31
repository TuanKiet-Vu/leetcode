# LRU cache

## Problem

Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the LRUCache class:

LRUCache(int capacity) Initialize the LRU cache with positive size capacity.
int get(int key) Return the value of the key if the key exists, otherwise return -1.
void put(int key, int value) Update the value of the key if the key exists. Otherwise, add the key-value pair to the cache. If the number of keys exceeds the capacity from this operation, evict the least recently used key.
The functions get and put must each run in O(1) average time complexity.
## Pattern

Linked list

## Idea
- Unordered map to store the key and the pointer to its value
- Double linked list to track the usage order of the nodes., head->next is the node just used while tail->prev is the least recently used node
- The function deleteNode  unlinks the node from the link list and the function addNode to link the node the head->next
- To update the usage status of the key, we delete the node from the link list and then link in front of the list, right after the head
### Function get
- We need to find the key. If it exists, update the usage status and return value; otherwise return -1
### Function put
- When the node already exists, change the value of the key and update usage status
- If the map is fulled, delete completely the key from the map and linked list, then add new node and update its status
- If there is no existence of the key, we just need to add it to the map and update status

## Complexity

* Time: O(n)

* Space: O(n)



