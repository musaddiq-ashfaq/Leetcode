class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int c = m + n - 1;
        int i = m - 1, j = n - 1;

        while (c >= 0) {
            if (i >= 0 && (j < 0 || nums1[i] >= nums2[j])) {
                nums1[c] = nums1[i];
                i--;
            } else {
                nums1[c] = nums2[j];
                j--;
            }
            c--;
        }
    }
};
//Time complexity: O(m+n)
//Space Complexity: O(1)