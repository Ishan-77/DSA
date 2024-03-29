class Solution {
public:
    int minInsertions(string s) {
        int n = s.size();
        
        string s2 = s;
        
        reverse(s2.begin(),s2.end());
        
        int m  = s2.size();
        
        vector<vector<int>>dp(n+1,vector<int>(m+1,0));
        
        
        for(int i=0;i<=n;i++) {
            dp[0][i] = 0;
        }
        for(int j=0;j<=m;j++) {
            dp[j][0] = 0;
        }
        
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=m;j++) {
                if(s[i-1] == s2[j-1]) {
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else {
                    dp[i][j] = 0+max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        int lcsLen = dp[n][m];
        
        return n-lcsLen;
        
        
    }
};