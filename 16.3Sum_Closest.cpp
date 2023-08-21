class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int closest = INT_MAX, diff = INT_MAX, temp = INT_MAX;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<nums.size();i++)
        {
            int left = i + 1, right = nums.size() - 1;
            while(left < right)
            {
                temp = nums[i] + nums[left] + nums[right];
                if(abs(temp - target) < diff)
                {
                    closest = temp;
                    diff = abs(target - closest);
                }
                if(temp == target)
                    return closest;
                else if(temp < target)
                    left++;
                else
                    right--;
            }
        }
        return closest;
    }
};