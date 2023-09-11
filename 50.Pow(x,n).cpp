class Solution {
public:
    double myPow(double x, int n) {
        double result = 1.0;
        long long absN = abs(static_cast<long long>(n));
        while (absN > 0) {
            if (absN % 2 == 1)
                result *= x;
            x *= x;
            absN /= 2;
        }
        return (n < 0) ? 1.0 / result : result;
    }
};
