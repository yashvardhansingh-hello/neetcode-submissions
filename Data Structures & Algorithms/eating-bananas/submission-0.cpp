class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = 0;
        // find maximum pile
        for(int& pile:piles) {
            if(pile>max) max=pile;
        }

        int min=1;
        int ans;
        while(min<=max) {
            int m = min + (max-min)/2;
            int time=0;
            for (int& pile: piles) {
                time += ceil(static_cast<double>(pile)/m);
            }
            if(time>h) min=m+1;
            else {
                ans=m;
                max=m-1;
            }

        }
        return ans;
    }
};
