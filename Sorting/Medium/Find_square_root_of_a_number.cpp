if square==n:
                return mid
            if square<=n:
                ans=mid
                low=mid+1
            square=mid*mid
            mid=(low+high)//2
        while low<=high:
        high=n