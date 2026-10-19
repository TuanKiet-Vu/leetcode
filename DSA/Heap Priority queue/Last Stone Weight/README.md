# Last Stone Weight

## Pattern
- Priority queue/Heap

## Idea
- Create a max heap from the list stones
- Make a loop running while heap's size > 1 which ensure we always have two stones to smash together
- Set x to the largest value and y to the second largest value
- If x>y, smash them together and add (x-y) representing the remaining stone to the heap; Otherwise, delete both stones
- If the heap is empty after processing all the values, return 0
- Otherwise, return -heap[0] which is the final weight of smashing every stones

## Complexity
- Time: O(nlogn)
- Space: O(n)
