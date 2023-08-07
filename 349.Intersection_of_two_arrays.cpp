class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        unordered_set<int> s;
        for(int i = 0;i<nums1.size();i++)
            s.insert(nums1[i]);
        for(int i = 0;i<nums2.size();i++)
        {
            auto it = s.find(nums2[i]);
            if(it != s.end())
            {
                s.erase(nums2[i]);
                intersection.push_back(nums2[i]);
            }
        }
        return intersection;
    }
};
//Time complexity: O(m+n)
//Space complexity: O(min(m,n))