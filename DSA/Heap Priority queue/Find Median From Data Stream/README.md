# Find Median From Data Stream

## Pattern
- Priority queue/Heap

## Idea
- We use max/min heap to keep track of the lower and upper half of the input array
- Max heap stores the smaller half, while min heap stores the larger half
- We keep these invariants:
  1. Min heap and max heap always have the same size, and max heap can contain at most one extra number
  2. Every numbers in max heap is smaller than or equal to every numbers in min heap
- The root of max heap is the median when array's size is odd
- The median is the average of two roots of both heaps when its size is even

## Complexity
- Time: addnum O(logn), findmedian O(1)
- Space: addnum O(n), findmedian O(1)
