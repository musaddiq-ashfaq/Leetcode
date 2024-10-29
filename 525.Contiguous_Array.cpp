class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int max_len = 0;
        unordered_map<int,int> umap;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0)
                nums[i] = -1;
        }
        umap.insert({nums[0],0});
        for(int i = 1;i<nums.size();i++){
            nums[i]+=nums[i-1];
            if(nums[i] == 0)
                max_len = i+1;
            else{
                auto it = umap.find(nums[i]); 
                if (it != umap.end()) {
                    if(i - it->second > max_len) 
                        max_len = i - it->second;
                }
                umap.insert({nums[i],i});
            }
        }
        return max_len;
    }
};
