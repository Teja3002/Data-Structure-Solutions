if nums[mid] > nums[high]:
                low = mid + 1
            else:
           

            mid = (low + high) // 2
                high = mid


         while low < high:
        return low
class Solution:
    def findKRotation(self, nums):
        low, high = 0, len(nums) - 1