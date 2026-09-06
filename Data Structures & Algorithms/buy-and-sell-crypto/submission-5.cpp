class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP=0;
        int minB=prices[0];

        for (int& price:prices){
            if(price<minB) {minB=price;continue;}
            maxP=max(maxP, price-minB);
        }
        return maxP;
    }
};
