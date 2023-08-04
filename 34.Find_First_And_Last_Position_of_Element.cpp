class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int last = nums.size() - 1;
        int start = 0;
        vector<int> positions;
        while(start < nums.size())
        {
            if(nums[start] == target)
            {
                positions.push_back(start);
                break;
            }
            start++;
        }
        while(last >=0)
        {
            if(nums[last] == target)
            {
                positions.push_back(last);
                break;
            }
            last--;
        }
        if(positions.empty())
        {
            positions.push_back(-1);
            positions.push_back(-1);
        }
        return positions;
    }
};