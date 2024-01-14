class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size()) return false;
        
        vector<int>freq1(26);
        vector<int>freq2(26);
        
        set<char>st1;
        set<char>st2;
        
        for(int i=0;i<word1.size();i++) {
            freq1[word1[i]-'a']++;
            freq2[word2[i]-'a']++;
            st1.insert(word1[i]);
            st2.insert(word2[i]);
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        
        return freq1==freq2 && st1==st2;
        
        
        
        
       
        
        
    }
};