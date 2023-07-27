class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int counter = 1;
        int len = nums.size();
        for(int i = 1; i<len;i++)
        {
            if(nums[i] != nums[i-1])
            {
                nums[counter] = nums[i];
                counter++;
            }
        }
        return counter;
    }
};
//Time Complexity : O(n)
//Space Complexity : O(1)