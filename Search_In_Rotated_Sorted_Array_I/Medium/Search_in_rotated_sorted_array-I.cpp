# Applying binary search algorithm
        while low <= high:
            mid = (low + high) // 2

            # Check if mid points to the target
            if nums[mid] == target:
                return mid