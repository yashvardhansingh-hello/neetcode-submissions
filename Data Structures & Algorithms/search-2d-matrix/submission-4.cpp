class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size(),n=matrix[0].size();
        int rl=0,rr=n-1;
        int ct=0,cb=m-1;
        int cm;
        while(ct<=cb) {
            cm = ct + (cb-ct)/2;
            if(matrix[cm][0]>target) cb=cm-1;
            else if(target>matrix[cm][rr]) {
                ct=cm+1;
            } else break;
        }
        if(!(ct<=cb)) return false;
        while(rl<=rr) {
            int rm = rl + (rr-rl)/2;
            int rmv = matrix[cm][rm];
            if(rmv==target) return true;
            if(rmv>target) rr=rm-1;
            else rl=rm+1;
        }
        return false;

    }
};
