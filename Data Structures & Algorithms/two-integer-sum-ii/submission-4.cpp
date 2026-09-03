class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        size_t n = numbers.size();
        int l=0;
        int r=n-1;
        for (int i=0;i<n;++i) {
            int search = target-numbers[i];
            while (l<=r) {
                int m = l + (r-l)/2;
                
                if(numbers[m]==search) {
                    if(i==m) break;
                    if (i<m) return {i+1, m+1};
                    return {m+1, i+1};
                }
                if(numbers[m]<search) {
                    l = m+1;
                }else {
                    r=m-1;
                }
            }
            l=0;r=n-1;
            
        }
        return {-1, -1};
    }
};
