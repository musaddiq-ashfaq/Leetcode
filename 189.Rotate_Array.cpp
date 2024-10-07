class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotated(nums.size());
        for(int i = 0;i<nums.size();i++){
            int temp = i + k;
            if(temp > nums.size()-1)
                temp = temp % nums.size();
            rotated[temp] = nums[i];
        }
        nums.clear();
        nums.insert(nums.begin(), rotated.begin(), rotated.end());
    }
};