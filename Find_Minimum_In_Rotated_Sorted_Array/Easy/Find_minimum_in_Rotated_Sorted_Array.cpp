low=0
        n=len(nums)
        high=n-1
        mini=float('inf')
        while low<=high:
            mid=(low+high)//2

            if nums[low]<=nums[mid]:
                mini=min(mini,nums[low])
                low=mid+1
            else:
                mini=min(mini,nums[high])
                high=mid-1
    def findMin(self, nums):
class Solution: