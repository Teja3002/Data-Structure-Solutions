class Solution:
    # Function to search for the target element in a rotated sorted array
    def search(self, nums, target):
        low, high = 0, len(nums) - 1

        # Applying binary search algorithm
        while low <= high:
            mid = (low + high) // 2

            # Check if mid points to the target
            if nums[mid] == target:
                return mid

                                                                                                                                                                                                                        
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        
                                                                                                                                                                                                                        
                                                                                                                                                             # Check if the left part is sorted
            if nums[low] <= nums[mid]:
                if nums[low] <= target <= nums[mid]:
                    # Target exists in the left sorted part
                    high = mid - 1
                else:
                    # Target does not exist in the left sorted part
                    low = mid + 1
            else:
                # Check if the right part is sorted
                if nums[mid] <= target <= nums[high]:
                    # Target exists in the right sorted part
                    low = mid + 1
                else:
                    # Target does not exist in the right sorted part
                    high = mid - 1

        # If target is not found
        return -1