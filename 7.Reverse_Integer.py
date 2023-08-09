class Solution(object):
    def reverse(self, x):
        if x >= 0:
            str_x = str(x)
            rev = str_x[::-1]
            x = int(rev)
        else:
            str_x = str(x)
            str_x = str_x[1:]
            rev = str_x[::-1]
            x = -int(rev)
        if x > 2**31 - 1:
            return 0
        if x < -2**31:
            return 0
        return x