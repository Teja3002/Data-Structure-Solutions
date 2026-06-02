low = mid + 1

            # Else nums[mid] <= nums[high]
            # Right side is sorted.
            # Minimum can be nums[mid] itself or left side.
            #
            # So do NOT remove mid.
            # Keep mid inside search space.
            else:
                high = mid

        # At the end low == high.
        # That index is the minimum element index.
        # Rotation count = minimum index.
        return low