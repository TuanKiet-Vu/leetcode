#solution
import heapq
class Solution(object):
    def kClosest(self, points, k):
        heap = []
        ans = []

        for x in points:
            distance  = sqrt(x[0]**2 + x[1]**2)
            heapq.heappush(heap,(distance,x))
        
        while k > 0 :
            p = heapq.heappop(heap)
            ans.append(p[1])
            k-=1
        return ans

        
