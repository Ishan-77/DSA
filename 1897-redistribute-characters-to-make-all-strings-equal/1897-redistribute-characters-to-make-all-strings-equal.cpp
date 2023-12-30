class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        unordered_map<char,int>mpp;
        
        for(auto word:words) {
            for(auto ch:word) {
                mpp[ch]++;
            }
        }
        for(int i=0;i<26;i++) {
            if(mpp[i+'a']%words.size()!=0) return false;
        }
        return true;
        
    }
};