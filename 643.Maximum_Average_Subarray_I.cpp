class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0.0;
        for(int i = 0;i<k;i++)
            sum+=nums[i];
        double max_sum = sum;
        int left = 0;
        for(int right = k;right<nums.size();right++){
            sum-=nums[left];
            sum+=nums[right];
            max_sum = max(max_sum,sum);
            left++;
        }    
        return max_sum/k;
    }
};
