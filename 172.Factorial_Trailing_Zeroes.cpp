class Solution {
public:
    int trailingZeroes(int n) {
        int counter = 0;
        while(n>=5){
            n=n/5;
            counter+=n;
        }
        return counter;
    }
};
