class Solution {
public:
    
    int func(int idx,int buy,int cap,vector<int>&prices,vector<vector<vector<int>>>&dp) {
        // base case
        
        if(cap==0) return 0;
        
        if(idx==prices.size()) return 0;
        
        int profit;
        
        if(dp[idx][buy][cap]!=-1) return dp[idx][buy][cap];
        if(buy==1) {
            
            int decide_buy = -prices[idx] + func(idx+1,0,cap,prices,dp);
            int decide_notbuy = 0+func(idx+1,1,cap,prices,dp);
            profit = max(decide_buy,decide_notbuy);
            
        }
        else { // sell
            int decide_sell =prices[idx] + func(idx+1,1,cap-1,prices,dp);
            int decide_notsell = 0+func(idx+1,0,cap,prices,dp);
            profit = max(decide_sell,decide_notsell);
        }
        return dp[idx][buy][cap] = profit;
    }
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
        
        
        return func(0,1,2,prices,dp);
        
    }
};