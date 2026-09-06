class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int minB=prices[0];

        for (int& price:prices){
            maxP=max(maxP, price-minB);
            minB=min(minB, price);
        }
        return maxP;
    }
};
