class Solution:
    def NthRoot(self, n, m):
        for i in range(m):
            power=i**n
            if power==m:
                return i
        return -1