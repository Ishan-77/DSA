class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        int n  = groupSizes.size();
        
        vector<vector<int>>fans;
        
        unordered_map<int,vector<int>>mpp;
        
        
        for(int i=0;i<n;i++) {
            mpp[groupSizes[i]].push_back(i);
            if(mpp[groupSizes[i]].size() == groupSizes[i]) {
                fans.push_back(mpp[groupSizes[i]]);
                mpp[groupSizes[i]].clear();
            }
        }
        return fans;
        
        
        
    }
};