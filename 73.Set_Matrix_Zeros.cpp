class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int numRows = matrix.size();
        int numCols = matrix[0].size();
        vector<vector<int>> temp(numRows, vector<int>(numCols));
        temp = matrix;
        for(int i = 0;i<numRows;i++)
        {
            for(int j = 0;j<numCols;j++)
            {
                if(matrix[i][j] == 0)
                    temp = makeZero(i,j,temp);
            }
        }
        matrix = temp;
    }
    vector<vector<int>> makeZero(int i,int j,vector<vector<int>> temp)
    {
        int rows = temp.size();
        int cols = temp[0].size();
        for(int a = 0;a<rows;a++)
            temp[a][j] = 0;
        for(int b = 0;b<cols;b++)
            temp[i][b] = 0;
        return temp;
    }
};