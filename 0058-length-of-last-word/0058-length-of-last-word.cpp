class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0;
        int j;
        int length;
        while(i<s.length())
        {
            while(s[i] == ' ')i++;
            
            if(i>=s.length()) break;
            
            j = i;
            
            while(j<s.length() && s[j]!= ' ')j++;
            
            length = j-i;
            
            i =  j+1;
            
            
        }
        return length;
        
    }
};