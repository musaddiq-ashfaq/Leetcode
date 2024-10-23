class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows = img.size();
        int cols = img[0].size();
        vector<vector<int>> avgImg(rows, vector<int>(cols, 0));
        int direction[9][2] = {{-1, -1}, {-1, 0}, {-1, 1},
                               { 0, -1}, { 0, 0}, { 0, 1},
                               { 1, -1}, { 1, 0}, { 1, 1}};
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                int sum = 0, count = 0;
                for (int d = 0; d < 9; d++) {
                    int ni = i + direction[d][0];
                    int nj = j + direction[d][1];
                    if (ni >= 0 && ni < rows && nj >= 0 && nj < cols) {
                        sum += img[ni][nj];
                        count++;
                    }
                }avgImg[i][j] = sum / count;
            }
        }
        return avgImg;
    }
};

