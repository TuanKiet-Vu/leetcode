#solution
#solution
import heapq
class KthLargest(object):

    def __init__(self, k, nums):
        self.k = k
        self.minHeap = heapq.nlargest(k,nums)
        heapq.heapify(self.minHeap)

    def add(self, val):
        heap = self.minHeap
        heapq.heappush(heap,val)

        if len(heap) > self.k:
            heapq.heappop(heap)

        return heap[0]

        
        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)
