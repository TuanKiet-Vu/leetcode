# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def serialize(self, root):
        if root is None:
            return ["#"]

        return [root.val] + self.serialize(root.left) + self.serialize(root.right)

    def isSubtree(self, root, subRoot):
        A = self.serialize(root)
        B = self.serialize(subRoot)

        m = len(A)
        n = len(B)

        for i in range(m - n + 1):
            if A[i:i+n] == B:
                return True

        return False
        
        
