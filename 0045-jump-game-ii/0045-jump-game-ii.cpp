class Solution {
public:
    
    
    int solve(vector<int>&nums,int start,int end,vector<int>&dp) {
        if(start>=end) return 0;
        
        if(dp[start]!=-1) return dp[start];
        
        int  temp = 1e8;
        
        for(int i=1;i<=nums[start];i++) {
            
            temp = min(temp,1+solve(nums,start+i,end,dp));
        }
        return  dp[start] = temp;
    }
    int jump(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>dp(n,-1);
        
        return solve(nums,0,nums.size()-1,dp); // min jumps to reach n-1 beginning from 0
        
    }
};