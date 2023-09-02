class Solution {
public:
    
    int func(int idx,int target,vector<int>&coins,vector<vector<int>>&dp) {
        // base conditons 
        if(idx==0) {
            if(target%coins[idx]==0) return target/coins[idx];
            
            else return 1e9;
        }
        if(dp[idx][target]!= -1) return dp[idx][target];
        int nottake = 0+func(idx-1,target,coins,dp);
        int take = INT_MAX;
        if(coins[idx]<=target) take = 1+func(idx,target-coins[idx],coins,dp);
        
        return dp[idx][target] =  min(take,nottake);
    }
    int coinChange(vector<int>& coins, int amount) {
        
        int n = coins.size();
        
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        
        
        int ans = func(n-1,amount,coins,dp);
        
        if(ans>=1e9) return -1;
        
        return ans;
        
        
    }
};