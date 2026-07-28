# Group Anagrams

## Problem

Given an array of strings `strs`, group the anagrams together.

You can return the answer in any order.

## Pattern

* Hash Map
* Sorting

## Idea

1. Create an empty 'unordered_map' where:
- The key is the sorted string
- The value is the list of strings that has the same anagram
2. Traverse the input array
3. For each string:
- Copy the current string
- Sort the copied string to create the representation
- Use the sorted string as the key to append the curruent string into the corresponding group
4. After processing all the strings, traverse the hash map and push all groups into the answer vector

## Complexity

* Time: **O(n × k log k)**

  * `n` is the number of strings.
  * `k` is the maximum length of a string.
  * Sorting each string takes **O(k log k)**, and this is done for all `n` strings.

* Space: **O(n × k)**

  * The hash map stores all strings grouped by their sorted keys.
  * Additional space is used for the sorted copies of the strings.
