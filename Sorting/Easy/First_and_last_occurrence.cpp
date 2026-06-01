elif nums[mid] < target:
                high = mid - 1
                first = mid
            if nums[mid] == target:

            mid = (low + high) // 2
        while low <= high:

        first = -1
    def firstoccur(self, nums, target, low, high):

        return [first, last]

        last = self.lastoccur(nums, target, low, high)
        first = self.firstoccur(nums, target, low, high)

        high = n - 1
        low = 0
        n = len(nums)
    def searchRange(self, nums, target):
class Solution: