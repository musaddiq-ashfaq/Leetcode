class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long first = LLONG_MIN,second = LLONG_MIN,third = LLONG_MIN;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] > first)
                first = nums[i];
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] > second && nums[i]<first)
                second = nums[i];
        }
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] > third && nums[i] < first && nums[i] < second)
                third = nums[i];
        }
        if(third != LLONG_MIN)
            return third;
        else
            return first;
    }
};