high = n - 1
        ans = n
        while low <= high:
            mid = (low + high) // 2
            if nums[mid] >= x:
                ans = mid
            else:
                high = mid - 1
                low = mid + 1

        return ans

        low = 0