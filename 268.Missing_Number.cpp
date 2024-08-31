class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int counter = 0;
        int iter = 0;
        while(iter<nums.size()){
            if(nums[iter] == counter){
                counter++;
                iter = 0;
            }
            else{
                iter++;
            }
        }
        return counter;
    }
};