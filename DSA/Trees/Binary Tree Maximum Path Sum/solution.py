# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def maxPathSum(self, root):
        self.ans = float('-inf')
        def find(root):
            if root is None:
                return 0
            left = max(find(root.left),0)
            right = max(find(root.right),0)
            self.ans = max(self.ans,root.val+right+left)
            return root.val + max(left,right)
        
        find(root)
        return self.ans
        
