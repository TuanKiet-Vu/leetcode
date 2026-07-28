# Valid Anagram

## Problem

Given two strings `s` and `t`, return `true` if `t` is an anagram of `s`, and `false` otherwise.

An anagram is a word or phrase formed by rearranging the letters of another, using all the original letters exactly once.

## Pattern

* Array (Frequency Counting)

## Idea

1. If the two strings have different lengths, return `false` immediately because they cannot be anagrams.
2. Create an integer array of size `26` to store the frequency difference of each lowercase letter.
3. Traverse both strings simultaneously.
4. For each index:

   * Increment the count for the character in `s`.
   * Decrement the count for the character in `t`.
5. After the traversal, check the frequency array.

   * If any value is not `0`, the two strings have different character frequencies, so return `false`.
   * Otherwise, return `true`.

## Complexity

* Time: **O(n)**

  * Traverse both strings once, then scan the frequency array of size `26`, which is constant time.

* Space: **O(1)**

  * The frequency array always contains `26` elements regardless of the input size.
