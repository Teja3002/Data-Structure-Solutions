mid=(low+high)//2

            if nums[mid] == x:
                return nums[mid], nums[mid]
                floor=nums[mid]
                low=mid+1
            else:
                ciel=nums[mid]
                high=mid-1
                
            elif nums[mid]<x:
        return floor,ciel