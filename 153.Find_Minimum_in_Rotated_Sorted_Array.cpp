class Solution {
public:
    int findMin(vector<int>& nums) {
        int val = nums[0];
        int l = 0, r = nums.size()-1;
        while(l<=r){
            if(nums[l]<nums[r]){
                val = min(nums[l],val);
                break;
            }

            int mid = l+(r - l)/2;
            val = min(nums[mid],val);

            if(nums[l]<=nums[mid])
                l = mid+1;
            else
                r = mid-1;
        }
        return val;
    }
};
