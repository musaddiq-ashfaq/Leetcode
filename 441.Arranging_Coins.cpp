class Solution {
public:
    int arrangeCoins(int n) {
        int complete = 0;
        for(int i = 1;i<=n;i++){
            n = n - i;
            if(n>=0)
                complete++;
            else
                break;
        }
        return complete;
    }
};