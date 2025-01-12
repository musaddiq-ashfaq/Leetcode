class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int max_left = height[l], max_right = height[r];
        int water = 0;
        while(l<r){
            if(max_left < max_right){
                l++;
                max_left = max(max_left, height[l]);
                if(max_left - height[l] > 0)
                    water+=(max_left - height[l]);
            }
            else{
                r--;
                max_right = max(max_right, height[r]);
                if(max_right - height[r] > 0)
                    water+=(max_right - height[r]);
            }
        }
        return water;
    }
};
