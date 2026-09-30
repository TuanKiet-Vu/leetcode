# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def goodNodes(self, root):
        def DFS(root,maxval):
            if root is None:
                return 0
            count = 1 if root.val >= maxval else 0
            maxval = max(maxval, root.val)
            return count + DFS(root.right,maxval)+ DFS(root.left,maxval)
    
        return DFS(root,root.val)
        
