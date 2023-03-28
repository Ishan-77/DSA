class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = INT_MIN;
        int buy = prices[0];
        
        for(int i=0;i<prices.size();i++)
        {
            buy = min(buy,prices[i]);
            max_profit  = max(max_profit,prices[i]-buy);
        }
        return max_profit;
    }
};