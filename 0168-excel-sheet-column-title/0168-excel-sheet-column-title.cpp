class Solution {
public:
    string convertToTitle(int n) {
        
        string res="";
        
        while(n) {
            char c = 'A' + (n-1)%26;
            res  = c+res;
            
            n = (n-1)/26;
            
        }
        
        return res;
        
    }
};