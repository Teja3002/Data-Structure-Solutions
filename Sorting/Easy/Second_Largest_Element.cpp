class Solution:
    def secondLargestElement(self, nums):
        temp1=float("-inf")
        temp2=float("-inf")

        for i in range(len(nums)):
            if nums[i]>temp1:
                temp1=nums[i]
               
            elif nums[i]< temp1 and nums[i]>temp2:
                temp2=nums[i]
                temp2=temp1
        return temp2