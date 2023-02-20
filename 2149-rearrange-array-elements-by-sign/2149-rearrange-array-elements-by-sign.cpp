class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int pel = 0;
        int nel  = 1;
        for(auto &el:nums)
        {
            if(el>0)
            {
                ans[pel] = el;
                pel+=2;
            }
            else
            {
                ans[nel] = el;
                nel+=2;
            }
        }
        return ans;
    }
};