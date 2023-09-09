class Solution {
public:
    
    int func(int idx,int buy,vector<int>&prices,int fee,vector<vector<int>>&dp) {
        if(idx>=prices.size()) return 0;
        int profit;
        
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        if(buy==1) {
            int decide_buy = -prices[idx]+func(idx+1,0,prices,fee,dp);
            int decide_notbuy = 0+func(idx+1,1,prices,fee,dp);
            profit = max(decide_buy,decide_notbuy);
        }
        else {
            int decide_sell = prices[idx]-fee + func(idx+1,1,prices,fee,dp);
            int decide_notsell = 0+func(idx+1,0,prices,fee,dp);
            profit = max(decide_sell,decide_notsell);
        }
        return  dp[idx][buy] =  profit;
    }
    int maxProfit(vector<int>& prices, int fee) {
        
        int n = prices.size();
        
        vector<vector<int>>dp(n,vector<int>(2,-1));
        
        return func(0,1,prices,fee,dp);
        
    }
};