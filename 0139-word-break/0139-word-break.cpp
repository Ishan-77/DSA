class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string>st;
        
        int n = s.size();
        
        
        vector<int>dp(n+1,false);
        
        dp[0] = true;
        
        
        for(int i=0;i<wordDict.size();i++) {
            st.insert(wordDict[i]);
        }
        for(int i=1;i<=n;i++) {
            for(int j=0;j<i;j++) {
                if(i==j) {
                    if(st.find(s.substr(0,j+1))!=st.end()) {
                        dp[i] = true;
                        break;
                    }
                }
                else if(dp[j]) {
                    if(st.find(s.substr(j,i-j))!=st.end()) {
                        dp[i] = true;
                        break;
                    }
                    
                }
            }
        }
        return dp[n];
        
    }
};