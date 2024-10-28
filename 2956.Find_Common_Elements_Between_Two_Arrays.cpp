class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int counter = 0;
        vector<int> vec;
        bool flag = false;
        for(int i = 0;i<nums1.size();i++){
            for(int j = 0;j<nums2.size();j++){
                if(nums1[i] == nums2[j])
                    flag = true;
            }
            if(flag){
                counter++;
                flag = false;
            }
        }
        vec.push_back(counter);
        counter = 0;
        for(int i = 0;i<nums2.size();i++){
            for(int j = 0;j<nums1.size();j++){
                if(nums1[j] == nums2[i])
                    flag = true;
            }
            if(flag){
                counter++;
                flag = false;
            }
        }
        vec.push_back(counter);
        return vec;
    }
};
