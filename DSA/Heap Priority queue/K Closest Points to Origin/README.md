# K Closest Points to Origin

## Pattern
- Priority queue/Heap

## Idea
- Use min heap storing each point and its distance from the origin
- Min heap allows us to return k closest point to the origin with time O(nlogn) 
- Run a loop while k>0, pop the closest point and add it to ans, decrement k by 1 and repeat until k points have been collected
- Return ans

## Complexity
- Time: O(nlogn)
- Space: O(n)
