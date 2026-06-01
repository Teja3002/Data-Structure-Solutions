class Solution:
    def getFloorAndCeil(self, nums, x):
        n=len(nums)
        low=0
        high=n-1
        ciel=-1
        floor=-1

        while low<=high:
            mid=(low+high)//2

            if nums[mid] == x:
                return nums[mid], nums[mid]