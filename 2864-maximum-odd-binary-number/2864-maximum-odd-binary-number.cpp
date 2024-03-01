class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        
        int left = 0;
        int right = s.size() - 1;
        
        int n = s.size();
        
        string ans = string(n,'0');
        
        int one = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                one++;
            }
        }
        
      while( one > 1) {
         ans[left] = '1';
          left++;
          one--;
      }
        ans[right] = '1';
        return ans;
    }
};
