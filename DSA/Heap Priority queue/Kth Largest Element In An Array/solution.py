import heapq

class Solution(object):
    def findKthLargest(self, nums, k):
        if len(nums) == 0:
            return 0
        heap = []
        for x in nums:
            if len(heap) == k:
                heapq.heappushpop(heap, x)
            else:
                heapq.heappush(heap, x)
        
     
        return heap[0]
        
