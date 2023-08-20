class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        int iter = 0;
        
        while (iter <= high) {
            if (nums[iter] == 0) {
                swap(nums[iter], nums[low]);
                low++;
                iter++;
            } else if (nums[iter] == 2) {
                swap(nums[iter], nums[high]);
                high--;
            } else {
                iter++;
            }
        }
    }
};
