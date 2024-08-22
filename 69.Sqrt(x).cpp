class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        if (x == 2 || x == 3)
            return 1;
        long long sqrt = 2;
        bool flag = true;
        while(flag){
            if(sqrt*sqrt>=x)
                flag = false;
            else if((sqrt+1)*(sqrt+1) > x)
                flag = false;
            else
                sqrt+=1;
        }
        return sqrt;
    }
};