class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = nums[0];
        int second = 0;
        int max_index = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] > max)
            {
                max = nums[i];
                max_index = i;
            }
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] > second && nums[i] < max)
                second = nums[i];
        }
        if(max >= second * 2)
            return max_index;
        return -1;
    }
};