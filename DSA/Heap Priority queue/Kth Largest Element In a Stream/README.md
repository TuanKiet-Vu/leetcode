# Kth Largest Element In a stream

## Pattern
- Priority queue/Heap

## Idea
### Initial function
- Create a list storing k largest values in nums
- Transform this list into min heap with the most k elements
### Add function
- Add new value to the heap
- If heap's size exceeds k, delete its smallest value and restructure the heap
- Return the root of heap which is the k largest value of nums
## Complexity
- Time: init() O(nlogk + k), add() O(logk)
- Space: init() O(k), add() O(1)
