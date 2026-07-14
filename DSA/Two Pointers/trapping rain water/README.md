#Container with most water

##Problem

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]). Find two lines that together with the x-axis form a container, such that the container contains the most water. Return the maximum amount of water a container can store. Notice that you may not slant the container.

##Pattern
Two Pointers

##Idea
Initialize two pointers:
i at the beginning of the array.
j at the end of the array.
Compute the current container area.
Update the maximum area found so far.
Compare height[i] and height[j].
Move the left pointer if the left height is smaller.
Move the right pointer if the right height is smaller.
Move both pointers if the heights are equal.
Repeat until the two pointers meet.

##Complexity
Time: O(n)
Space: O(1)
