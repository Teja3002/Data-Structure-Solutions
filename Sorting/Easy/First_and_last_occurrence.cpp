else:
                high = mid - 1

        return first

    def lastoccur(self, nums, target, low, high):
        last = -1

        while low <= high:
            mid = (low + high) // 2

            if nums[mid] == target:
                last = mid
                low = mid + 1
            elif nums[mid] < target:
                low = mid + 1
            else:
                high = mid - 1

        return last