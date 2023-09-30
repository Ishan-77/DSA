class Solution {
public:
    string removeKdigits(string num, int k) {
        
        
        if(k==0) return num;
        
        if(k==num.size()) return "0";
        
        stack<char>st;
        
        
        string ans="";
        
        for(int i=0;i<num.size();i++) {
            
            while(!st.empty() && num[i] < st.top() && k > 0) {
                st.pop();
                k--;
            } 
            st.push(num[i]);
            
            if(st.size()==1 && num[i] =='0') st.pop(); // leading 0
            
            
            
        }
        
        // 1 1 2 
        
        while(!st.empty() && k) {
                --k;
                st.pop();
            }
        
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        
        if(ans.size()==0) return "0";
        else return ans;
    }
};