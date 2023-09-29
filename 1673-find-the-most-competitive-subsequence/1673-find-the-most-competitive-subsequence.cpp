class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        
        int to_delete = nums.size() - k;
        
        vector<int>ans;
        
        
        for(int i=0;i<nums.size();i++) {
            while(!ans.empty() && ans.back() > nums[i] && to_delete) {
                to_delete--;
                ans.pop_back();
            }
             ans.push_back(nums[i]);
            
        }
        while(to_delete) {
            ans.pop_back();
            to_delete--;
        }
        return ans;
    }
};