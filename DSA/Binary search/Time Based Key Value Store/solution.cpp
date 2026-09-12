class TimeMap(object):


    def __init__(self):
        self.data = {}

    def set(self, key, value, timestamp):
        self.data.setdefault (key,[]).append((value,timestamp))
        

    def get(self, key, timestamp):
        if key not in self.data:
            return ""
        
        ans = ""
        left = 0
        right = len(self.data[key]) -1
        map = self.data[key]

        while left <= right:
            mid = left + (right-left)//2


            if map[mid][1] == timestamp:
                return map[mid][0]
            elif map[mid][1] < timestamp:
                ans = map[mid][0]
                left = mid + 1
                
            else:
                right = mid - 1

        return ans
        


# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)
