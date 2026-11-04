#solution
import heapq
class MedianFinder(object):

    def __init__(self):
        self.small = []
        self.large = []

    def addNum(self, num):
        if not self.small:
            heapq.heappush(self.small, -num)

        elif len(self.small) == len(self.large):
            if num >= self.large[0]:
                min_val = heapq.heappop(self.large)
                heapq.heappush(self.small, -min_val)
                heapq.heappush(self.large, num)
            else:
                heapq.heappush(self.small, -num)

        else:
            if num < -self.small[0]:
                max_val = -heapq.heappop(self.small)
                heapq.heappush(self.large, max_val)
                heapq.heappush(self.small, -num)
            else:
                heapq.heappush(self.large, num)
        

    def findMedian(self):
        if len(self.small) > len(self.large):
            return -self.small[0]

        return (-self.small[0] + self.large[0]) / 2.0
        


# Your MedianFinder object will be instantiated and called as such:
# obj = MedianFinder()
# obj.addNum(num)
# param_2 = obj.findMedian()
