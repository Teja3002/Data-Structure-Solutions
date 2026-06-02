class Solution:
    # Function to search for the target element in a rotated sorted 
    def search(self, nums, target):
        low, high = 0, len(nums) - 1

        # Applying binary search algorithm
        while low <= high:
            mid = (low + high) // 2

    array
            # Check if mid points to the target
            if nums[mid] == target:
                return mid