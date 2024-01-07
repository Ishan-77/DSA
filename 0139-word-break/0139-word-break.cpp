class Solution {
public:
    
    
   
 
    bool solve(int idx,string &s,vector<int>&dp,unordered_set<string>&st) {
        
        
        
        
        int n = s.size();
        
        
        if(idx>=n) {
            return  true;
        }
        
        if(dp[idx]!=-1) return dp[idx];
        
        
        if(st.find(s)!=st.end()) return true;
        else {
            for(int l=1;l<=n;l++) {
                string temp = s.substr(idx,l);
                
                if(st.find(temp)!=st.end() && solve(idx+l,s,dp,st)) return dp[idx] =  true;
                
            }
        }
        return dp[idx] =  false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        
        unordered_set<string>st;
        int n = s.size();
        
        vector<int>dp(n,-1);
        
        for(int i=0;i<wordDict.size();i++) {
            st.insert(wordDict[i]);
        }
        
        return solve(0,s,dp,st);
        
    }
};