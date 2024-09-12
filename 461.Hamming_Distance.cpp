class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = x ^ y; 
        int counter = 0; 
        while (result) {
            counter += (result & 1); 
            result >>= 1; 
        }
        return counter;
    }
};
