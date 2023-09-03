class Solution {
public:
    
    int func(int idx1,int idx2,string &text1,string &text2,vector<vector<int>>&dp) {
        if(idx1<0 || idx2<0) return 0;
        
        if(dp[idx1][idx2]!= -1) return dp[idx1][idx2];
        
        if(text1[idx1]==text2[idx2]) {
            return  dp[idx1][idx2] = 1+func(idx1-1,idx2-1,text1,text2,dp);
        }
        return dp[idx1][idx2] =   0+max(func(idx1-1,idx2,text1,text2,dp),func(idx1,idx2-1,text1,text2,dp));
    }
    int longestCommonSubsequence(string text1, string text2) {
        
        
    
        
       int n = text1.size();
        
       int m = text2.size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        return func(n-1,m-1,text1,text2,dp);
            
        
    }
};