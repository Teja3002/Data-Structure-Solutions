class Solution:
    def largestElement(self, nums):
        temp = nums[0]
        for i in range( 1, len(nums)):
            if nums[i] > temp:
                temp = nums[i]
        return temp