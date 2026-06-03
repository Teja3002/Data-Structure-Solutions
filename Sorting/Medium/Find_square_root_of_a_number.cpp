if square==n:
                return mid
            if square<=n:
                ans=mid
                low=mid+1
            else:
                high=mid-1

        return ans