class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int col = matrix[0].size();
        int left = 0, right = rows * col - 1;
        while(left <= right)
        {
            int mid = left + (right - left)/2;
            int midValue = matrix[mid / col][mid % col];
            if(midValue == target)
                return true;
            else if(midValue > target)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return false;
    }
};