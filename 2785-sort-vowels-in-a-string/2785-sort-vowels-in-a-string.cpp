class Solution {
public:
    
    bool isVowel(char ch) {
        if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') return true;
else return  false;
    }
    string sortVowels(string s) {
        
        vector<char>vowels;
        vector<int>pos;
        
        for(int i=0;i<s.size();i++) {
            if(isVowel(s[i])) {
                vowels.push_back(s[i]);
                pos.push_back(i);
            }
        }
        sort(vowels.begin(),vowels.end());
        string ans = s;
        
        for(int i=0;i<pos.size();i++) {
            ans[pos[i]] = vowels[i];
         }
        
        return ans;
        
    }
};