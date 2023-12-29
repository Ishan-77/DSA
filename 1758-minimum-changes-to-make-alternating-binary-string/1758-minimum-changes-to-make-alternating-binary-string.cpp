class Solution {
public:
    int minOperations(string s) {
        
        int count_zero = 0;
        int n = s.size();
        
        
        for(int i=0;i<s.size();i++) {
            if(i%2==0 && s[i]=='1') count_zero++; 
            if(i%2==1 && s[i]=='0') count_zero++;
        }
        return min(count_zero,n-count_zero);
        
    }
};