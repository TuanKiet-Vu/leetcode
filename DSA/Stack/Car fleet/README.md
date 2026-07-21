# Car fleet

## Problem
There are n cars at given miles away from the starting mile 0, traveling to reach the mile target.

You are given two integer arrays position and speed, both of length n, where position[i] is the starting mile of the ith car and speed[i] is the speed of the ith car in miles per hour.

A car cannot pass another car, but it can catch up and then travel next to it at the speed of the slower car.

A car fleet is a single car or a group of cars driving next to each other. The speed of the car fleet is the minimum speed of any car in the fleet.

If a car catches up to a car fleet at the mile target, it will still be considered as part of the car fleet.

Return the number of car fleets that will arrive at the destination.
 
## Pattern
- Stack

## Approach 
- Create an array of pairs of speed and position
- Sort the array by decreasing position
- Traverse the sorted array
- Compute the time of each car needs to reach the target
- if the current car's time is less or equal than the top of the stack (fleet's time) -> it wil be blocked and become a part of the fleet -> skip the loop
- Otherwise, the car cannot catch up the fleet, so it forms a new fleet and push the time onto the stack
- The number of fleets is the size of the stack

## Complexity
- Time : O(n log n)
- Space : O(n)





