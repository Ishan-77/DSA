class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char,int>mpp;
        
        for(auto c:s) {
            mpp[c]++;
        }
        for(auto ch:t) {
            mpp[ch]--;
            if(mpp[ch] < 0) return ch;
        }
        
        return '#';
        
    }
};