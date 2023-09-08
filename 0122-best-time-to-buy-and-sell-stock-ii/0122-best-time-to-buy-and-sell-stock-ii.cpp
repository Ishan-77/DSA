class Solution {
public:
    
    int func(int idx,int buy,vector<int>&prices,vector<vector<int>>&dp) {
        // base condition
        
        if(idx>=prices.size()) return 0;
        
        // explore all different possibilities 
        
        if(dp[idx][buy]!=-1) return dp[idx][buy];
        
        int profit;
        
        if(buy==1) {
           int decide_buy = -prices[idx] + func(idx+1,0,prices,dp); // buy 
            int decide_notbuy =  0+func(idx+1,1,prices,dp);// not buy 
            profit = max(decide_buy,decide_notbuy);
            
        }
        else {
            int decide_sell  =prices[idx]  + func(idx+1,1,prices,dp);
            int decide_notsell = 0 + func(idx+1,0,prices,dp);
            profit = max(decide_sell,decide_notsell);
        }
        return  dp[idx][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        
        int n  = prices.size();
        
        vector<vector<int>>dp(n,vector<int>(2,-1));
        
        return func(0,1,prices,dp);
        
    }
};