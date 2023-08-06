class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0;i<nums.size();i++)
        {
            auto it = mp.find(nums[i]);
            if(it != mp.end() && abs(it->second - i) <= k)
            {
                return true;
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};
//Time Complexity: O(N)
//Space Complexity: O(N)