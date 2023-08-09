class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<vector<int>> transpose(cols, vector<int>(rows));
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                transpose[i][j] = matrix[j][i];
            }
        }
        for (int i = 0; i < rows; i++)
        {
            int c = cols - 1;
            for (int j = 0; j < cols; j++)
            {
                matrix[i][j] = transpose[i][c];
                c--;
            }
        }
    }
};