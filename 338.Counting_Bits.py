class Solution(object):
    def countBits(self, n):
        ans = []
        for i in range(0,n+1):
            bin_str = bin(i)
            ans.append(bin_str.count('1'))
        return ans