class Solution {
public:
    void helper(int idx,vector<vector<int>>&fans,vector<int>ans,int target,vector<int>&candidates)
    {
        if(idx==candidates.size())
        {
            if(target==0)
            {
                fans.push_back(ans);
                
            }
            return;
        }
        if(candidates[idx]<=target)
        {
            ans.push_back(candidates[idx]);
            helper(idx,fans,ans,target-candidates[idx],candidates);
            ans.pop_back();
        }
        helper(idx+1,fans,ans,target,candidates);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>fans;
        vector<int>ans;
        helper(0,fans,ans,target,candidates);
        return fans;
    }
};