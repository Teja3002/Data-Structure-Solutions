class Solution:
    def floorSqrt(self, n: int) -> int:
        ans=0
        low=0
        
        high=n
        while low<=high:
            mid=(low+high)//2
            square=mid*mid
            if square==n: