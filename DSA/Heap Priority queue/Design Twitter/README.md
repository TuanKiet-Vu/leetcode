# Design Twitter

## Pattern
- Priority queue/Heap

## Idea
Each user stores their tweets in a list ordered by time (the last element is the newest), along with a global,
increasing timestamp counter so tweets from different users can be compared. Follow relationships are stored in a set.
### Get new feed
- Push each user’s most recent tweet into a max-heap (store -time, since Python only provides a min-heap).
- Pop the top of the heap to get the newest tweet, then push the next older tweet from that same user into the heap.
- Repeat at most 10 times.
## Complexity
- Time: posttweet O(1), follow O(1), unfollow(1), getnewfeed O(k+10*logK),
- Space: posttweet O(1), follow O(1), unfollow(1), getnewfeed O(k),
