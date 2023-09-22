class Solution {
public:
    string removeDuplicates(string s, int k) {
        
        stack<pair<char,int>>st;
        
        string ans="";
        
        for(char c: s) {
            if( !st.empty() && st.top().first == c) {
                st.top().second++;
            }
            else {
                st.push({c,1});
            }
            if(st.top().second == k) {
                st.pop();
            }
            
        }
        while(!st.empty()) {
            
            
            
            int count = st.top().second;
            int character =  st.top().first;
            st.pop();
            
            
            while(count--) {
                ans+=character;
            }
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};