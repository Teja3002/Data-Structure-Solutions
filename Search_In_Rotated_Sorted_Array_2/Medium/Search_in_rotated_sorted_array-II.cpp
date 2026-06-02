if nums[low]==nums[mid]==nums[high]:
                low+=1
                return True
            

            if nums[mid]==target:
                high-=1
                continue
            if nums[low]<=nums[mid]:
                if nums[low]<=target<=nums[mid]:
                    high=mid-1
                else:
                    low=mid+1
            else:
                if nums[mid]<=target<=nums[high]:
                    low=mid+1