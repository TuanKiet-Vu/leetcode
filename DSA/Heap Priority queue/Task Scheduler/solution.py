#solution
import heapq
from collections import Counter
from collections import deque

class Solution(object):
    def leastInterval(self, tasks, n):
        frequent = Counter(tasks)
        max_heap = [(-fre, char) for char, fre in frequent.items()]
        heapq.heapify(max_heap)

        q = deque()

        i = 0
        while max_heap or q:
            added = False
            while q and q[0][0] <=  i:
                ready_time,fre,x = q.popleft()
                heapq.heappush(max_heap,(-fre,x))

            if max_heap:
                fre,x = heapq.heappop(max_heap)
                fre = -fre - 1
                if fre > 0:
                    q.append((i + n + 1, fre, x))
            i+=1
            
        return i
        
