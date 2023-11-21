class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int len = temperatures.size();
        
        stack<int>st;
        
        vector<int>ans(len,0);
        
        for(int i=len-1;i>=0;i--) {
            while(!st.empty() && temperatures[i]>=temperatures[st.top()]) {
                st.pop();
            }
            if(!st.empty()) {
                ans[i] = st.top()-i;
            }
            st.push(i);
        }
        return ans;
        
    }
};