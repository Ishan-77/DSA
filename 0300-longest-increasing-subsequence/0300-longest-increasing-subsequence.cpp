class Solution {
public:
    
    int func(int idx,int prev,vector<int>&nums,vector<vector<int>>&dp) {
        if(idx>=nums.size()) return 0;
        
        
        if(dp[idx][prev+1]!=-1) return dp[idx][prev+1];
        int nottake = 0+func(idx+1,prev,nums,dp);
        
        int take = 0;
        if(prev==-1 || nums[idx]>nums[prev]) {
            take = 1+func(idx+1,idx,nums,dp);
        }
        return dp[idx][prev+1] =  max(take,nottake);
    }
    int lengthOfLIS(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        
        return func(0,-1,nums,dp);
        
    }
};