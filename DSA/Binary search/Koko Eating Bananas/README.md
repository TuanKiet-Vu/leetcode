# Koko Eating Bananas

## Problem

Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k. Each hour, she chooses some pile of bananas and eats k bananas from that pile. If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.



## Pattern

Binary search

## Idea
 - We use binary search to find the minimum speed
 - Set left to 1 (the minimum possible speed can be reached) and right to the number of bananas in the largest pile
 - Start a loop to find the speed while left<=right
 - Set mid to the middle speed between left and right 
 - Then calculate how long koko can finish all banana piles with that speed
 - If that time is longer than h, search on the right side because that speed is too slow so we try out faster ones
 - If it's shorter or equal to h, save that time which is fast enough and continue finding on the left side for a smaller valid speed

## Complexity

* Time: O(nlog m)

* Space: O(1)




