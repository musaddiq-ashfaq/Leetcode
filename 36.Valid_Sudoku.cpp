class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<char> s;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.') {
                    if (s.insert(board[i][j]).second)
                        continue;
                    else
                        return false;
                }
            }
            s.clear();
        }
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                if (board[j][i] != '.') {
                    if (s.insert(board[j][i]).second)
                        continue;
                    else
                        return false;
                }
            }
            s.clear();
        }
        for (int row = 0; row < board.size(); row += 3) {
            for (int col = 0; col < board[row].size(); col += 3) {
                s.clear();
                for (int i = row; i < row + 3; i++) {
                    for (int j = col; j < col + 3; j++) {
                        if (board[i][j] != '.') {
                            if (s.insert(board[i][j]).second)
                                continue;
                            else
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
