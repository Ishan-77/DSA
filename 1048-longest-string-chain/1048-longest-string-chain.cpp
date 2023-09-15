class Solution {
public:
    
    static bool comp(string &s1,string &s2) {
        return s1.size() < s2.size();
    }
    bool check(string &a,string &b) {
        if (b.size()-a.size()!=1) return false;
        int i=0;
        int j=0;
        int count=0;
        
        while(i<a.size() && j<b.size()) {
            if(a[i]!=b[j]) {
                count++;
                j++; // larger in size
            }
            else {
                i++;
                j++;
            }
        }
        if(count>=2) return false;
        else return true;
        
    }
    int longestStrChain(vector<string>& words) {
        
        int n = words.size();
        
        vector<int>dp(n,1);
        vector<int>hash(n);
        
        sort(words.begin(),words.end(),comp);
        
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++) {
            for(int prev=0;prev<i;prev++) {
                if(check(words[prev],words[i]) && 1+dp[prev]  > dp[i]) {
                    dp[i] = 1+dp[prev];
                }
            }
            maxi = max(maxi,dp[i]);
            
        }
        return maxi;
        
    }
};