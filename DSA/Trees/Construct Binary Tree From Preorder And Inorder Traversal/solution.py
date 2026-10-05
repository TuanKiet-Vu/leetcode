# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def buildTree(self, preorder, inorder):
        idx = {}
        self.cur = 0
        for i,v in enumerate(inorder):
            idx[v] = i
            
        def build(l,r):
            if l>r:
                return None
            
            val = preorder[self.cur]
            node = TreeNode(val)
            m = idx[val]
            self.cur += 1
            node.left = build(l,m-1)
            node.right = build(m+1,r)

            return node
        
        return build(0, len(preorder)-1)
        

