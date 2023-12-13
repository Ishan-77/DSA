class Solution {
public:
    int numberOfSubstrings(string s) {
        
        unordered_map<char,int>mpp;
        
        int i=0;
        
        int n = s.size();
        
        int ans = 0;
        
        for(int j=0;j<s.size();j++) {
            mpp[s[j]]++;
            
            while(mpp['a']>=1 && mpp['b']>=1 && mpp['c']>=1) {
                ans+=n-j;
                
                mpp[s[i]]--;
                i++;
            }
        }
        return ans;
    }
};