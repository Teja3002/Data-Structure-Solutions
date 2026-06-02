class Solution:
    def search(self, nums, k):
        for i in range(len(nums)):
            if nums[i]==k:
                return i
            else:
                return -1