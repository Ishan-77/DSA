class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        if(s.size()!=t.size()) return false;
        unordered_map<char,char>m1;
        unordered_map<char,bool>m2;
        for(int i=0;i<s.size();i++)
        {
            if(m1.count(s[i]))
            {
                if(m1[s[i]]!=t[i]) return false; 
            }
            else
            {
                if(m2[t[i]]) return false;
                
                m1[s[i]] = t[i];
                m2[t[i]] = true;
            }
        }
        return true;
    }
};