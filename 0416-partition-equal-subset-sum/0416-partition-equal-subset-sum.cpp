class Solution {
public:
    
    
    bool subsetTarget(int idx,int target,vector<int>&nums,vector<vector<int>>&dp) {
        if(target==0) return true;
        
        if(idx==0) return nums[idx] == target;
        
        if(dp[idx][target]!= -1) return dp[idx][target];
        
        bool take = false;
        if(target>=nums[idx]) take = subsetTarget(idx-1,target-nums[idx],nums,dp);
         
        bool nottake = subsetTarget(idx-1,target,nums,dp);
        
        return dp[idx][target] =  take|nottake;
        
    }
    bool canPartition(vector<int>& nums) {
        
        //vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        
        int n = nums.size();
        
        int tot_sum=0;
        for(int i=0;i<nums.size();i++) {
            tot_sum+=nums[i];
        }
        if(tot_sum%2!=0) return false;
        
         int target = tot_sum/2;
         vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
        
        return subsetTarget(n-1,target,nums,dp);
        
    }
};