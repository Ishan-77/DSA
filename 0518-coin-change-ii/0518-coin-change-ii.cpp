class Solution {
public:
    
    
    int func(int idx,int target,vector<int>&coins,vector<vector<int>>&dp) {
        if(idx==0) {
            if(target%coins[idx]==0) return 1;
            else return 0;
        }
        if(dp[idx][target]!= -1) return dp[idx][target];
        int nottake = func(idx-1,target,coins,dp);
        int take = 0;
        if(coins[idx]<=target) take = func(idx,target-coins[idx],coins,dp);
        
        return dp[idx][target] =  take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        
        int n = coins.size();
        
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        
         return  func(n-1,amount,coins,dp);
        
        
        
    }
};