while low<=high:
            mid=(low+high)//2

            if nums[mid] == target:
                return mid
            elif target>nums[mid]:
                low=mid+1
            else:
        high=n-1
        n=len(nums)
        low=0
    def search(self, nums, target):
class Solution: