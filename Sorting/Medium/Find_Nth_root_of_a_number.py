class Solution:
    def NthRoot(self, n, m):
        for i in range(1,m+1):
            power=i**n
            if power==n:
                return i
            else:
                return -1