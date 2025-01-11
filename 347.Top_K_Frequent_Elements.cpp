class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> sortedVector(mp.begin(), mp.end());
        sort(sortedVector.begin(), sortedVector.end(),comparePairs);
        vector<int> vec;
        for (int i = 0; i < k; i++) {
            vec.push_back(sortedVector[i].first);
        }
        return vec;
    }
    static bool comparePairs(const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    }
};
