class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        stack<int>st;
        int thirdEl = INT_MIN;
        for(int i=nums.size()-1;i>=0;i--) {
            
            
            if(nums[i] < thirdEl) return true;
            
            while(!st.empty() && nums[i] > st.top()) {
                thirdEl  = st.top(); // nums[k]
                st.pop();
            }
            st.push(nums[i]);
            
        }
        return false;
        
    }
};