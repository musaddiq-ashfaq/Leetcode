class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        int s = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0;i<s-1;i++)
        {
            if(nums[i] == nums[i+1])
            {
                flag = true;
                break;
            }
            if(flag == true)
                break;
        }
        return flag;
    }
};
//Time Complexity: O(n log n)
//Space Complexity: O(1)