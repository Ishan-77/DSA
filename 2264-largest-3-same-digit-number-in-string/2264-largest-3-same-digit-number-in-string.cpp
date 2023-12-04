class Solution {
public:
    string largestGoodInteger(string num) {
        int ans = INT_MIN;
        
        for(int i=0;i<num.size()-2;i++) {
            if(num[i]==num[i+1] && num[i+1]==num[i+2]) {
                ans = max(ans,num[i]-'0');
            }
        }
        if(ans==INT_MIN) return "";
        else return string(3,ans+'0');
        
    }
};