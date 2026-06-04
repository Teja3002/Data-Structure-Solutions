class Solution:
    def NthRoot(self, n, m):
        low = 1
        high = m

        while low <= high:
            mid = (low + high) // 2
            power = mid ** n

            if power == m: