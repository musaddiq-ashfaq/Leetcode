class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        for (string& str : strs) {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            umap[sortedStr].push_back(str);
        }
        vector<vector<string>> result;
        for (auto& group : umap) {
            result.push_back(group.second);
        }
        return result;
    }
};