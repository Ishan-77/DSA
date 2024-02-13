class Solution {
public:
    
    bool isPalindrome(string &word){
        if(word.size()==1) return true;
        int i=0;
        int j = word.size()-1;
        
        while(i<=j) {
            if(word[i]!=word[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        
        for(int i=0;i<words.size();i++) {
            if(isPalindrome(words[i])) {
                return words[i];
            }
         
        }
        return "";
        
    }
};