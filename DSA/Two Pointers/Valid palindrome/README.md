# Valid Palindrome

## Problem

Given a string `s`, determine whether it is a palindrome after:

* Converting all uppercase letters to lowercase.
* Removing all non-alphanumeric characters.

Return `true` if the resulting string is a palindrome, otherwise return `false`.

## Pattern

* Two Pointers

## Idea

1. Initialize two pointers:

   * `i` at the beginning of the string.
   * `j` at the end of the string.
2. Move `i` forward until it points to an alphanumeric character.
3. Move `j` backward until it points to an alphanumeric character.
4. Convert both characters to lowercase before comparing.
5. If the characters are different, return `false`.
6. Otherwise, move both pointers inward and continue.
7. If all corresponding characters match, return `true`.

## Complexity

* Time: **O(n)**

  * Each character is visited at most once by the two pointers.
* Space: **O(1)**

  * Only a few variables are used, regardless of the input size.

