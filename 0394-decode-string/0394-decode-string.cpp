class Solution {
public:
    string decodeString(string s) {
        stack<char>st;
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=']')
            {
                st.push(s[i]);
            }
        
        else
        {
            string str="";
            
            while(st.top()!='[')
            {
                str=st.top()+str;
                st.pop();
            }
            st.pop(); // popping '['
            
            // handling number 
            
            string num="";
            while(!st.empty() && isdigit(st.top()))
            {
                num=st.top()+num;
                st.pop();
            }
            int iterations = stoi(num); // conversion of string to integer
            
            while(iterations--)
            {
                for(int j=0;j<str.size();j++)
                {
                    st.push(str[j]);
                }
            }
        }
      }
        string ans="";
        
        while(!st.empty())
        {
            ans=st.top()+ans;
            st.pop();
        }
        return ans;
        
        
    }
};