class Solution {
public:
    
    bool static comp(pair<int,int>a,pair<int,int>b)
    {
        return a.second>b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++; // storing frequency
        }
        vector<pair<int,int>>v(mpp.begin(),mpp.end()); // map->vector of pair conversion 
        
        sort(v.begin(),v.end(),comp);
        
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
        
    }
};