class Solution {
public:
    int minSteps(string s, string t) {
        
        int cnt= 0;
        
        unordered_map<char,int>mpp;
        
        for(int i=0;i<s.size();i++) {
            mpp[s[i]]++;
        }
        for(int i=0;i<t.size();i++) {
            mpp[t[i]]--;
        }
        for(auto it:mpp) {
            if(it.second<0) cnt+=abs(it.second);
        }
        return cnt;
        
    }
};