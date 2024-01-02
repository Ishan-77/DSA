class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        unordered_map<int,int>mpp;
        int maxi = INT_MIN;
        
        for(int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
            maxi = max(maxi,mpp[nums[i]]);
        }
        vector<vector<int>>fans(maxi); // size of 2d array
        
        
        for(auto it:mpp) {
            //vector<int>ans;
            int k = it.first;
            int freq   = it.second;
            
            for(int i=0;i<freq;i++) {
                fans[i].push_back(k);
                
            }
        }
        return fans;
        
    }
};