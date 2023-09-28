class Solution {
public:
    string removeDuplicateLetters(string s) {
        
        vector<int>lastocc(26,-1);
        
        string ans="";
        
        vector<bool>visited(26,false);
        
        for(int i=0;i<s.size();i++) {
            lastocc[s[i]-'a'] = i;
        }
        
        stack<char>st;
        
        for(int i=0;i<s.size();i++) {
            
            if(visited[s[i]-'a']) continue;
            
              while(!st.empty() && s[i] < st.top() && i < lastocc[st.top()-'a']) {
                  visited[st.top() - 'a'] = false;
                  st.pop();
               
               }
            
            st.push(s[i]);
            visited[s[i]-'a'] = true;
        }
        
        while(!st.empty()) {
            
            char top = st.top();
            ans+=top;
            st.pop();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
        
        
        
        
    }
};