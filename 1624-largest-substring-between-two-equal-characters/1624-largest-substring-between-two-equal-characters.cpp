class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        unordered_map<char,int>mpp;
        
        int len = -1;
        
        
        for(int i=0;i<s.size();i++) {
            if(mpp.find(s[i])!=mpp.end()) {
                
                len = max(len,i-mpp[s[i]]-1);
                
            }
            else {
                mpp[s[i]]=i;
            }
        }
        return len;
        
    }
};