class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int>LSE(n);
        vector<int>RSE(n);
        
        
        stack<int>st;
        
        for(int i=0;i<n;i++) {
           if(st.empty()) {
               LSE[i] = -1;
           }
           else {
               while(!st.empty() && arr[st.top()] >=arr[i]) st.pop();
               
               LSE[i] = st.empty() ? -1: st.top();
           }
            st.push(i);
            
        }
        while(!st.empty()) {
            st.pop();
        }
        for(int i=n-1;i>=0;i--) {
           if(st.empty()) {
               RSE[i] = n;
           }
           else {
               while(!st.empty() && arr[st.top()] > arr[i]) st.pop();
               
               RSE[i] = st.empty() ? n:st.top();
           }
            st.push(i);
        }
        
        int mod = 1e9+7;
        
        long long  ans = 0;
        
        for(int i=0;i<n;i++) {
            long long left_len = i-LSE[i];
            long long right_len = RSE[i]-i;
            
            long long total_ways = left_len * right_len;
            
            ans =  (ans + arr[i]*total_ways)%mod;
            
        }
        return ans;
        
    }
};