//Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = prices[0], profit = 0;
        for(int i=1; i<prices.size(); i++) {
            int diff = prices[i] - mini;
            profit = max(diff, profit);
            mini = min(mini, prices[i]);
        }
        return profit;
    }
};
