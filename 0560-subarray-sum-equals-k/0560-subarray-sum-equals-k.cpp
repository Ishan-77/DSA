class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int  count=0;
        int sum=0;
        unordered_map<int,int>m;
        m.insert({0,1});
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            
            auto it = m.find(sum-k);
            
            if(it!=m.end())
            {
                count+=it->second;
            }
            it=m.find(sum);
            
            if(it!=m.end())
            {
                it->second++;
            }
            else
            {
                m.insert({sum,1});
            }
        }
        return count;
        
    }
};