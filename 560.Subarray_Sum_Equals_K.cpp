class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int counter = 0;
        for(int i = 1;i<nums.size();i++){
            nums[i] += nums[i-1];
        }  
        for(int i = 0;i<nums.size();i++)
            cout<<nums[i]; 
        for(int i = 0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if(nums[j]-nums[i] == k)
                    counter++;
            }
            if(nums[i] == k)
                counter++;
        }
        return counter;
    }
};
