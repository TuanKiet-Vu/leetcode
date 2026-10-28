# Task Scheduler

## Pattern
- Priority queue/Heap

## Idea
- Use max heap storing the character's remaining frequency
- Queue contains the tasks that are still in cooldown time and their next availble time
- Run a loop while max heap or queue is not empty
- If the heap is not empty, pop the task having the highest remaining frequency and decrement its frequency by 1
- If this task still has remaining frequency (that means the frequency > 0), add it to queue with its next ready time
- Make a loop traversing the queue to see if there's any task that is ready to execute (that means its next time <= the current time)
- If the task is ready, remove it from the heap and push it again to the heap
- Return the minimum numbers of CPU interval that needed to complete all tasks
## Complexity
T is the number of tasks and K is the number of differents tasks
- Time: O(T log K)
- Space: O(K)
