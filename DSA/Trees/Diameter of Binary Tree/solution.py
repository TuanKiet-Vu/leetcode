# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    

    def diameterOfBinaryTree(self, root):
        self.diameter = 0
        def DFS (root):
            if root is None:
                return 0

            maxLeft = DFS(root.left)
            maxRight = DFS(root.right)

            self.diameter = max(self.diameter,maxLeft+maxRight)

            return 1 + max(maxLeft,maxRight)

        DFS(root)
        return self.diameter
        
