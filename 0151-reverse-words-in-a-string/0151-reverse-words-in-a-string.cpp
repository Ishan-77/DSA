class Solution {
public:
    string reverseWords(string s) { 
        int n  = s.length();
      string res="";
        int i=0;
        while(i<n)
        {
            while(isspace(s[i]))
            {
                i++;
            }
            if(i>=n) break;
            int j = i+1;
            while( j<n &&  s[j]!=' ')
            {
                j++;
            }
            string str =  s.substr(i,j-i);
            
            if(res.empty())
                res = str;
            else
                res = str+ " "+ res;
            
             i  = j+1;
        }
        return res;
        
    }
};