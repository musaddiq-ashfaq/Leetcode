class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans(queries.size(), 0);
        for(int i = 1;i<arr.size();i++){
            arr[i]^=arr[i-1];
        }
        for(int i = 0;i<queries.size();i++){
            int l = queries[i][0];
            int r = queries[i][1];
            if(l==0)
                ans[i] = arr[r];
            else
                ans[i] = arr[r] ^ arr[l - 1];
        }
        return ans;
    }
};
