# Median of Two Sorted Arrays

## Problem
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

## Pattern

Binary search

## Idea
- Always do binary search on the shorter array, which ensure j in a valid range
- Set m to the shorter array's length (A) while n to the other (B)
- Set left to 0 and right to m and half = (m+n+1)//2
- As the whole array A may be on the left side, that's why we set right = m instead = m-1
- Creating a loop to find the middle point of the two merged array
- Set i = left + (right-left)//2 and j = half - i
- To know which parts of the two array are on the left and right side of the merged array, we use these four pointers:
Aleft = A[i-1] if i>0 else float('-inf')
Aright = A[i] if i<m else float('+inf')
Bleft = B[j-1] if j>0 else float('-inf')
Bright = B[j] if j<n else float('+inf')
- When Aleft <= Bright and Aright >= Bleft, the middle is (max(Aleft,Bleft) + min(Aright,Bright))/2.0 if the total size is odd
- But if the total size is even, the middle point is max(Aleft,Bleft)
- If Aleft > Bright, search on the right side
- If Aright < Bleft, search on the left side

## Complexity

Time complexity: O(log(m+n))

Space complexity: O(1)
