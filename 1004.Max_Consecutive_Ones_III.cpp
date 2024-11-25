class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int zero_counter = 0, maxi = 0;
        int right = 0, left = 0;
        while(right < nums.size()){
            if(nums[right] == 0)
                zero_counter++;
            while (zero_counter > k) {
                if (nums[left] == 0)
                    zero_counter--;
                left++;
            }
            maxi = max(maxi, right-left + 1);
            right++;
        }
        return maxi;
    }
};
