# Time Based Key Value Store

## Problem
Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key's value at a certain timestamp.

Implement the TimeMap class:

TimeMap() Initializes the object of the data structure.
void set(String key, String value, int timestamp) Stores the key key with the value value at the given time timestamp.
String get(String key, int timestamp) Returns a value such that set was called previously, with timestamp_prev <= timestamp. If there are multiple such values, it returns the value associated with the largest timestamp_prev. If there are no values, it returns "".

## Pattern

Binary search

## Idea
### Set function
- If the key already existed in the map, add the pair of value and timestamp
- Else set a new key before adding that pair
### Get function
- Check if the key exists in the map, then using binary search to find the timestamp which is equal of smaller than the required one
- If the key does not exist, return " "
- Note: when the mid timestamp is smaller than the required, store it to the answer as it may be the largest time before searching for the right side

## Complexity

Time complexity:  set : O(1)
                  get : O(log n)

Space complexity: set : O(n)
                  get : O(1)
