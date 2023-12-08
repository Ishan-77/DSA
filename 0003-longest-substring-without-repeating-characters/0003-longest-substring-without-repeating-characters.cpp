class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_map<char,int>mpp;
        
        int i=0;
        
        int ans = 0;
        
        for(int j=0;j<s.size();j++) {
            mpp[s[j]]++;
            
            
            while(mpp[s[j]] > 1) {
                mpp[s[i]]--;
                i++;
                
            }
            ans = max(ans,j-i+1);
        }
        return ans;
        
    }
};