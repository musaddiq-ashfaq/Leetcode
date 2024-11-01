class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> left = nums;
        vector<int> right = nums;
        for(int i = 1;i<nums.size();i++){
            left[i]*=left[i-1];
        }
        for(int i = nums.size()-2;i>=0;i--){
            right[i]*=right[i+1];
        }
        for(int i = 0;i<nums.size();i++){
            if(i==0)
                nums[i] = right[i+1];
            else if(i == nums.size()-1)
                nums[i] = left[i-1];
            else
                nums[i] = left[i-1] * right[i+1];
        }
        return nums;
    }
};
