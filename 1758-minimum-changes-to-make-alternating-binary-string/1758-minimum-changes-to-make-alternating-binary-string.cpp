class Solution {
public:
    int minOperations(string s) {
        
        int count_zero  = 0;
        int count_one  = 0;
        
        
        for(int i=0;i<s.size();i++) {
            if(i%2==0) {
                if(s[i]=='0') {
                    count_one++;
                }
                else {
                    count_zero++;
                }
            }
            else {
                if(s[i]=='0') {
                    count_zero++;
                }
                else {
                    count_one++;
                }
            }
            
            
        }
        return min(count_zero,count_one);
        
    }
};