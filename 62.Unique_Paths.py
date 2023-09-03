class Solution(object):
    def uniquePaths(self, m, n):
        fn = factorial(m+n-2)
        fr = factorial(m-1)
        fnr = factorial((m+n-2) - (m-1))
        c = fn/(fr*fnr)
        return c
    #using C(m+n-2,m-1)