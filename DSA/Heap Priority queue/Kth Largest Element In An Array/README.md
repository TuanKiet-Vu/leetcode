# Kth Largest Element In An Array

## Pattern
- Priority queue/Heap

## Idea
### Initial function
- Make a list storing k largest values of nums
- Create min heap from this list and ensure its size is always smaller or equal to k
### Add function
- Add new value to the heap
- If min heap is higher than k, delete its smallest value and restructure the heap
- Return the root of heap which is the k largest value of nums
## Complexity
- Time: init() O(nlogk + k), add() O(logk)
- Space: init() O(k), add() O(1)
