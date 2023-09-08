class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0,h = 0,low = 0, high = height.size() - 1;
        int width = 0;
        while(low<high)
        {
            h = min(height[low],height[high]);
            width = high - low;
            if(width * h > max)
                max = width * h;
            if(height[low] <= height[high])
                low++;
            else
                high--;
        }
        return max;
    }
};

//Time complexity: O(N)
//Space complexity: O(1)