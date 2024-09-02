class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (dividend == INT_MIN && divisor == 1)
            return INT_MIN;
        if(divisor == 1)
            return dividend;
        if(divisor == -1)
            return -dividend;
        int counter = 0;
        bool neg = (dividend < 0) ^ (divisor < 0);
        long long dividendLong = abs(static_cast<long long>(dividend));
        long long divisorLong = abs(static_cast<long long>(divisor));
        while (dividendLong >= divisorLong) {
            dividendLong -= divisorLong;
            counter++;
        }
        return neg ? -counter : counter;
    }
};
