class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        
        int n  = prices.size();
        
        vector<vector<int>>dp(n+1,vector<int>(2,0));
        
        dp[n][0] = 0;
        dp[n][1] = 0;
        
         int profit;
        
        for(int idx=n-1;idx>=0;idx--) {
            for(int buy=1;buy>=0;buy--) {
                if(buy==1) {
           int decide_buy = -prices[idx] + dp[idx+1][0]; // buy 
            int decide_notbuy =  0+dp[idx+1][1];// not buy 
            profit = max(decide_buy,decide_notbuy);
            
        }
        else {
            int decide_sell  =prices[idx]  + dp[idx+1][1];
            int decide_notsell = 0 + dp[idx+1][0];
            profit = max(decide_sell,decide_notsell);
        }
          dp[idx][buy] = profit;
                
            }
        }
        return dp[0][1];
        
        
        
    }
};