class Solution {
public:
    
    void helper(int idx,vector<int>&temp,vector<int>&nums,vector<vector<int>>&ans)
    {
        // base condition
        if(idx>=nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        // pick
        temp.push_back(nums[idx]);
        helper(idx+1,temp,nums,ans);
        // not pick up
        temp.pop_back();
        helper(idx+1,temp,nums,ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        helper(0,temp,nums,ans);
        return ans;
    }
};