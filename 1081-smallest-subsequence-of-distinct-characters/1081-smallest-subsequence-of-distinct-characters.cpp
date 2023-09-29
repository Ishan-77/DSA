class Solution {
public:
    string smallestSubsequence(string s) {
    
        vector<int>lastocc(26,0);
        vector<bool>vis(26,false);
        
        string ans = "";
        
        stack<char>st;
        
        // find last occurr
        
        for(int i=0;i<s.size();i++) {
            lastocc[s[i]-'a'] = i;
        }
        
        
        
        for(int i=0;i<s.size();i++) {
            
            if(vis[s[i]-'a']) continue;
            while(!st.empty() && s[i] < st.top() && i < lastocc[st.top()-'a']) {
                vis[st.top()-'a'] =  false;
                st.pop();
                
                
            }
            st.push(s[i]);
            vis[s[i]-'a'] =  true;
        }
        while(!st.empty()) {
            char top = st.top();
            st.pop();
            ans+=top;
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};