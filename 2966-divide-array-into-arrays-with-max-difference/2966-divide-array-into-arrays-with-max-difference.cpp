class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        
        //vector<int>ans;
        
        vector<vector<int>>ans;
        
        
        // 1 1 5 3 4 5 7 8 9 -> sorted
        
        for(int i=2;i<=nums.size();i+=3) {
            if(nums[i]-nums[i-2] > k) return {};
            else {
                ans.push_back({nums[i-2],nums[i-1],nums[i]});
            }
        }
        return ans;
        
        
    }
};