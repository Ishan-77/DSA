class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        
        int i=0;
        int j=0;
        int  n = s.size();
        int startindex;
        int lastindex;
        while(j<n)
        {
        while(j<n && s[j]==' ')j++;
        
        startindex = i;
        
        while(j<n && s[j] !=' ')
        {
            s[i++] =  s[j++];
                lastindex = i;
        }
        reverse(s.begin()+startindex,s.begin()+lastindex);
        s[i++] = ' ';
        
            
        }
        s.resize(lastindex);
        return s;
    }
};