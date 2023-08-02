class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int counter = 1;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] == candidate)
                counter++;
            else
                counter--;
            if(counter == 0)
            {
                candidate = nums[i];
                counter = 1;
            }
        }
        return candidate;
    }
};
//Time Complexity : O(n)
//Space Complexity : O(1)