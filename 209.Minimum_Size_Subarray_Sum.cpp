class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int result = INT_MAX;
        for(int i = 1;i<nums.size();i++)
            nums[i]+=nums[i-1];

        if(nums[0] >= target)
            return 1;

        int l = 1, r = 2;
        while(r<nums.size()){
            if(nums[r]-nums[l-1] >= target){
                if(r-l+1 < result)
                    result = r-l+1;
                l++;
            }
            if(nums[r] >= target && r+1 < result)
                result = r+1;
            if(nums[l] >= target && l+1 < result)
                result = l+1;
            if(nums[r]-nums[l-1]<target)
                r++;
        }

        if(1 < nums.size() && nums[1] >= target && 2 < result)
            result = 2;

        if(result == INT_MAX)
            return 0;
        return result;
    }
};
