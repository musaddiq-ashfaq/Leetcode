class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nextZero = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] != 0)
            {
                nums[nextZero] = nums[i];
                nextZero++;
            }
        }
        for(int i = nextZero;i<nums.size();i++)
            nums[i] = 0;
    }
};
//Time Complexity: O(N)
//Space Complexity: O(1)