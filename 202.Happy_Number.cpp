class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        vector<int> v = getDigits(n);
        for(int i = 0;i<v.size();i++){
            sum += pow(v[i],2);
        }
        if(sum != 1){
            return isHappy(sum);
        }
        else
            return true;
    }
    vector<int> getDigits(int n){
        vector<int> v;
        while(n != 0){
            v.push_back(n % 10);
            n = n / 10;
        }
        return v;
    }
};