class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> permutations;
        sort(nums.begin(),nums.end());
        permutations.push_back(nums);
        while(true){
            int i = nums.size()-2, j = nums.size()-1;
            while(i>=0 && nums[i]>=nums[i+1])
                i--;

            if(i < 0)
                break;
            
            while(j >= 0 && nums[j]<=nums[i])
                j--;

            swap(nums[i],nums[j]);
            reverse(nums.begin()+i+1, nums.end());
            permutations.push_back(nums);
        }
        return permutations;
    }
};