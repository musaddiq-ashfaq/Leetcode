class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> vec;
        if (nums.empty()) return vec;
        int start = nums[0];  
        int prev = nums[0];   
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != prev + 1) {
                if (start == prev)
                    vec.push_back(to_string(start));
                else 
                    vec.push_back(to_string(start) + "->" + to_string(prev));
                start = nums[i];
            }
            prev = nums[i];
        }
        if (start == prev)
            vec.push_back(to_string(start));
        else 
            vec.push_back(to_string(start) + "->" + to_string(prev));
        return vec;
    }
};

