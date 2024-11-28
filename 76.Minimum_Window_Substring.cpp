class Solution {
public:
    string minWindow(string s, string t) {
        if (s.length() < t.length())
            return "";
        if (s.length() == t.length() && s == t)
            return s;
        unordered_map<char, int> umap_s;
        unordered_map<char, int> umap_t;
        for (int i = 0; i < t.length(); i++) {
            umap_t[t[i]]++;
        }
        int right = 0, left = 0;
        int min_len = INT_MAX;
        int start = 0;
        for (right = 0; right < s.length(); right++) {
            umap_s[s[right]]++;
            while (isMatch(umap_s, umap_t)) {
                if (right - left + 1 < min_len) {
                    min_len = right - left + 1;
                    start = left;
                }
                umap_s[s[left]]--;
                left++;
            }
        }
        if(min_len == INT_MAX)
            return "";
        return s.substr(start,min_len);
    }
    bool isMatch(unordered_map<char, int>& umap_s, unordered_map<char, int>& umap_t) {
        for (auto& [ch, count] : umap_t) {
            if (umap_s[ch] < count) {
                return false;
            }
        }
        return true;
    }
};

