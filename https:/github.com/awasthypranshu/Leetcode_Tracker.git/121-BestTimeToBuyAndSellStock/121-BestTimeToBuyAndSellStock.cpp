// Last updated: 26/07/2026, 22:05:44
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> bestBuy(n);

        bestBuy[0] = prices[0];
        int bestPrice = prices[0];
        for(int i = 1; i < prices.size(); i++){
            bestBuy[i] = min(bestBuy[i-1],prices[i-1]);
        }
        int profit = 0;
        int maxProfit = 0;
        for(int i = 0; i < prices.size(); i++){
            profit = prices[i] - bestBuy[i];
            if(profit > maxProfit){
                maxProfit = profit;
            }
        }
        return maxProfit;
    }
};