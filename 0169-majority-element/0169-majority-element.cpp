class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int m = nums[0];
        
        for(auto it:mpp)
        {
            if(it.second>mpp[m])
            {
                m=it.first;
            }
        }
        return m;
    }
};