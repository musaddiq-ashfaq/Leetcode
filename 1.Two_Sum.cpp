class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> result;
        unordered_map<int,int> comp;
        for(int i = 0; i<size ; i++)
        {
            int complement = target - nums[i];
            if(comp.count(complement))
            {
                result.push_back(comp[complement]);
                result.push_back(i);
                break;
            }
            comp[nums[i]] = i;
        }
        return result;
    }
};
//Time complexity : O(n)