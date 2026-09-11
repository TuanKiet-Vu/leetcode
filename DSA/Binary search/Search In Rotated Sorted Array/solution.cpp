class Solution(object):
    def findBreak(self, nums):
        left = 0
        right = len(nums) - 1
        while left < right:
            mid = left + (right - left) // 2
            if nums[mid] > nums[right]:
                left = mid + 1
            else:
                right = mid
        return left

    def binary_search(self, nums, l, r, target):
        while l <= r:
            mid = l + (r - l) // 2
            if nums[mid] == target:
                return mid
            elif nums[mid] < target:
                l = mid + 1
            else:
                r = mid - 1
        return -1

    def search(self, nums, target):
        pivot = self.findBreak(nums)
        n = len(nums)

        result = self.binary_search(nums, 0, pivot - 1, target)
        if result != -1:
            return result

        result1 = self.binary_search(nums, pivot, n - 1, target)
        if result1 != -1:
            return result1

        return -1
        
