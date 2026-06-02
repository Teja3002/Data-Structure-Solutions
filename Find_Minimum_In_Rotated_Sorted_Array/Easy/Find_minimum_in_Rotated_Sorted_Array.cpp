low=0
        high=n-1
        mini=float("inf")

        while low<=high:
            mid=(low+high)//2
            if arr[low]<=arr[mid]:
                mini=min(mini,arr[low])
            else:


                mini=min(mini,arr[mid])
                high=mid-1
                low=mid+1
        return  mini