class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size(),cols=matrix[0].size();
        int l=0,r=(rows*cols)-1;
        while(l<=r) {
            int m = l + (r-l)/2;
            int row = m/cols,col = m%cols;
            int mv = matrix[row][col];
            if(target<mv) r=m-1;
            else if(target>mv) l=m+1;
            else return true; 
        }
        return false;
    }
};
