#solution
import heapq
class Twitter(object):

    def __init__(self):
        self.following = {}
        self.tweet = {}
        self.time = 0
        

    def postTweet(self, userId, tweetId):
        self.time += 1
        self.tweet.setdefault(userId,[]).append((self.time,tweetId))
        

    def getNewsFeed(self, userId):
        users = [u for u in self.following.get(userId,set())]
        users.append(userId)

        maxheap = []
        for u in users:
            tweets = self.tweet.get(u, [])
            if tweets:
                idx = len(tweets) - 1                
                time, tweetId = tweets[idx]
                maxheap.append((-time, tweetId, u, idx))  
        heapq.heapify(maxheap)
        
        heapq.heapify(maxheap)

        ans  = []
        while maxheap and len(ans) < 10:
            time,tweetId,u,index = heapq.heappop(maxheap)
            ans.append(tweetId)
            if index > 0:
                time,tweetId = self.tweet[u][index-1]
                heapq.heappush(maxheap,(-time,tweetId,u,index-1))
        
        return ans
        

    def follow(self, followerId, followeeId):
        self.following.setdefault(followerId,set()).add(followeeId)
        

    def unfollow(self, followerId, followeeId):
        if followeeId in self.following.get(followerId,set()):
            self.following[followerId].discard(followeeId)
        


# Your Twitter object will be instantiated and called as such:
# obj = Twitter()
# obj.postTweet(userId,tweetId)
# param_2 = obj.getNewsFeed(userId)
# obj.follow(followerId,followeeId)
# obj.unfollow(followerId,followeeId)
