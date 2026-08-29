class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0, minBuy=prices[0];
        for(int& sell: prices) {
            int p = sell-minBuy;
            if (p > maxP) maxP = p;
            if (sell < minBuy) minBuy = sell;
        }
        return maxP;
    }
};
