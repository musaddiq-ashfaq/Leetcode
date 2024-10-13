class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> vec;
        vector<int> inner;
        find(1, vec, inner, k, n);
        return vec;
    }
    void find(int i, vector<vector<int>>& vec,vector<int>& inner, int k, int n) {
        if (inner.size() == k) {
            vec.push_back(inner);
            return;
        }
        for (int start = i; start <= n; ++start) {
            inner.push_back(start);
            find(start + 1, vec, inner, k, n);
            inner.pop_back();
        }
    }
};
