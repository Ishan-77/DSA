class Solution {
public:

        const int MOD = 1000000007;

    
    int func(int i,int j,string &s,string &t,vector<vector<int>>&dp ) {
        // base case
        if(j<0) return 1;
        if(i<0) return 0;
        //if(j<1) return 1;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        if(s[i] == t[j]) {
            return  dp[i][j] = (func(i-1,j-1,s,t,dp) + func(i-1,j,s,t,dp)) % MOD;
        }
        else {
            return dp[i][j] =  func(i-1,j,s,t,dp);
        }
    }
    
    int numDistinct(string s, string t) {
        
        int n = s.size();
        
        int m  = t.size();
        
        vector<vector<int>>dp(n,vector<int>(m,-1));
        
        
        return func(n-1,m-1,s,t,dp);
        
    }
};