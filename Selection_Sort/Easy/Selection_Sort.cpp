class Solution:
    def selectionSort(self, nums):
        length = len(nums)

        for i in range(length):
            min_index = i

            for j in range(i + 1, length):
                if nums[j] < nums[min_index]:
                    min_index = j

            nums[i], nums[min_index] = nums[min_index], nums[i]
        return nums