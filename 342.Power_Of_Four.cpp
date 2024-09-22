class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
            return false;
        float log = log2(n) / log2(4);
        if(log == int(log))
            return true;
        return false;
    }
};