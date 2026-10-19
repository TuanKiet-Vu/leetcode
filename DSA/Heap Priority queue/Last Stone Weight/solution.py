#solution
import heapq
class Solution(object):
    def lastStoneWeight(self, stones):
        heap = [-x for x in stones]
        heapq.heapify(heap)

        while len(heap)>=2:
            x = -heapq.heappop(heap)
            y = -heapq.heappop(heap)
            if x>y:
                heapq.heappush(heap,-(x-y))
        
        if len(heap) == 0:
            return 0
        return -heap[0]

        
