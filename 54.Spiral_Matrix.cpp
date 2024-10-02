class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int left = 0, right = matrix[0].size()-1;
        int top = 0, bottom = matrix.size() - 1;
        vector<int>vec;
        while(left<=right && top<=bottom){
            for(int i = left;i<=right;i++){
                vec.push_back(matrix[top][i]);
            }
            top++;
            if(top > bottom)
                break;
            for(int i = top;i<=bottom;i++){
                vec.push_back(matrix[i][right]);
            }
            right--;
            if(left>right)
                break;
            for(int i = right;i>=left;i--){
                vec.push_back(matrix[bottom][i]);
            }
            bottom--;
            if(top > bottom)
                break;
            for(int i = bottom;i>=top;i--){
                vec.push_back(matrix[i][left]);
            }
            left++;
            if(left>right)
                break;
        }
        return vec;
    }
};