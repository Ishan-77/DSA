class Solution {
public:
    
    vector<vector<int>>allsubsets;
    
    
        void generate(vector<int>&subset,int ind,vector<int>&nums)
        {
            if(ind==nums.size())
            {
                allsubsets.push_back(subset);
                return;
            }
            subset.push_back(nums[ind]);
            generate(subset,ind+1,nums);
            subset.pop_back();
            generate(subset,ind+1,nums);
        }
        
        vector<vector<int>>subsets(vector<int>&nums)
        {
            vector<int>empty;
            generate(empty,0,nums);
            return allsubsets;
        }
    
};