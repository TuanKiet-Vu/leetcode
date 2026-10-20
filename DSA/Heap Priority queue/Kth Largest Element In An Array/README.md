# Kth Largest Element In a stream

## Pattern
- Priority queue/Heap

## Idea
- Initialize a min heap to store k largest numbers
- Traverse each element in the array nums
- If len(heap) == 2, we push the current value into the heap and then pop the smallest value to keep the heap's size always be two
- Otherwise, only push the value to heap
- Return heap[0] which is the k largest number
## Complexity
- Time: O(nlogk)
- Space: O(k)
