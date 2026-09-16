class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        A,B = nums1,nums2
        if len(A) > len(B):
            B,A = A,B

        m,n = len(A),len(B)
        half = (m+n+1)//2
        left = 0
        right = m
       
        while left <= right:
            i = left + (right-left)//2
            j = half - i

            Aleft = A[i-1] if i>0 else float('-inf')
            Aright = A[i] if i<m else float('+inf')
            Bleft = B[j-1] if j>0 else float('-inf')
            Bright = B[j] if j<n else float('+inf')

            if Aleft <= Bright and Aright >= Bleft:
                if (m+n)%2 == 0:
                    return (max(Aleft,Bleft) + min(Aright,Bright))/2.0
                else:
                    return max(Aleft,Bleft)
            
            elif Aleft > Bright:
                right = i-1
            else:
                left = i+1

            
