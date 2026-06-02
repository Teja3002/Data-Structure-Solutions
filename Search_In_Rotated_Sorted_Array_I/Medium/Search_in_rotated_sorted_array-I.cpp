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