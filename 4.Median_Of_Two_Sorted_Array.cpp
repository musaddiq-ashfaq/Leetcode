class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> mergedArray;
        int i = 0, j = 0;
        float median = 0.0;
        while(i<nums1.size() && j<nums2.size())
        {
            if(nums1[i]<nums2[j])
            {
                mergedArray.push_back(nums1[i]);
                i++;
            }
            else
            {
                mergedArray.push_back(nums2[j]);
                j++;
            }
        }
        while(i<nums1.size())
        {
            mergedArray.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size())
        {
            mergedArray.push_back(nums2[j]);
            j++;
        }
        int s = mergedArray.size();
        if(s%2 == 0)
        {
            median = mergedArray[s/2 - 1] + mergedArray[s/2];
            median = median/2;  
        }
        else if(s == 1)
        {
            median = mergedArray[0];
        }
        else
        {
            median = mergedArray[s/2];
        }
        return median;
    }
};