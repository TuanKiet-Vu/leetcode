# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
from collections import deque
class Solution(object):
    def rightSideView(self, root):
        if root is None:
            return []
        
        ans = []
        q = deque([root])

        while q:
            level = []
            for i in range(len(q)):
                node = q.popleft()
                level.append(node)

                if node.left:
                    q.append(node.left)
                if node.right:
                    q.append(node.right)
                
            ans.append(level[-1].val)
        
        return ans

        
