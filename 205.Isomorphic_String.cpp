class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> umap_st;
        unordered_map<char, char> umap_ts;
        for (int i = 0; i < s.length(); i++) {
            if ((umap_st.find(s[i]) != umap_st.end() && umap_st[s[i]] != t[i]) ||
                (umap_ts.find(t[i]) != umap_ts.end() && umap_ts[t[i]] != s[i])) {
                return false;
            }
            umap_st[s[i]] = t[i];
            umap_ts[t[i]] = s[i];
        }
        return true;
    }
};