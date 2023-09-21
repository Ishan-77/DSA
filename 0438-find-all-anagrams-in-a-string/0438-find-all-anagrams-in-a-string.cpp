class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int p_len = p.length();
        
        if(s.size() < p.size()) return {};
        
        vector<int>ans;
        
       vector<int>phash(26,0);
        vector<int>shash(26,0);
        
        for(int i=0;i<p.size();i++) {
            phash[p[i]-'a']++;
            shash[s[i]-'a']++;
        }
        if(phash==shash) {
            ans.push_back(0);
        }
        
        
        for(int i = p.size();i<s.size();i++) {
            
            shash[s[i-p_len]-'a']--;
            shash[s[i]-'a']++;
            
            if(shash == phash) ans.push_back(i-p.size()+1);
            
        }
        return ans;
        
        
    }
};