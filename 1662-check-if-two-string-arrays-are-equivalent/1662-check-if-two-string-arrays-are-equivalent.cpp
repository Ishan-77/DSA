class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string ans1="";
        string ans2="";
        
        for(auto word:word1) {
            ans1+=word;
        }
        for(auto word:word2) {
            ans2+=word;
        }
        return ans1==ans2;
        
    }
};