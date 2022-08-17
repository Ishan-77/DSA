class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
            
            unordered_set<string> tran;
        
        for(auto word : words)
        {
            string ans="";
            
            for(auto ch : word)
                
                ans+=v[ch-'a'];
            
            tran.insert(ans);
            
        }
        return tran.size();
        
    }
};