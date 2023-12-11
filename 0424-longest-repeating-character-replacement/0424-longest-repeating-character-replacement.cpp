class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int max_c  = 0; // freq of most repeating char 
        
        int i=0;
        
        int ans = 0;
        
        unordered_map<char,int>mpp;
        
        for(int j=0;j<s.size();j++) {
           mpp[s[j]]++;
            
           max_c = max(max_c,mpp[s[j]]);
            
            int window_size = j-i+1;
            
            if(window_size-max_c  > k) {
                 mpp[s[i]]--;
                if(mpp[s[i]]==0) {
                    mpp.erase(s[i]);
                }
                i++;
                
            }
            ans = max(ans,j-i+1);
            
        }
        return ans;
        
    }
};