class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<vector<bool>> mpp(9, std::vector<bool>(27, false));
        for (int i=0;i<9;i++) {
            for (int j=0;j<9;j++) {
                if(board[i][j]=='.') continue;
                int num = board[i][j]-'1';
                int sq = (3*(j/3))+(i/3); 
                if(mpp[num][i] || mpp[num][9+j] || mpp[num][18+sq]) {
                    return false;
                }
                mpp[num][i] = true;
                mpp[num][9+j] = true;
                mpp[num][18+sq] = true;
            }
        }
        return true;

    }
};
