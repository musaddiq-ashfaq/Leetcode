class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int len = nums.size();
        int left = 0, right = len - 1;
        while(left <= right)
        {
            if(nums[left] == val)
            {
                nums[left] = nums[right];
                right -= 1;
            }
            else
                left += 1;
        }
        return left;
    }
};
//Time Complexity : O(n)
//Space Complexity : O(1)