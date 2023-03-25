class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int ans=0;
        unordered_set<int> s;
        for(auto x: nums)
        {
            s.insert(x);
        }
        for(int i=0;i<nums.size();i++)
        {
            int curr_el = nums[i];
            int prev_el  =  curr_el-1;
            if(s.find(prev_el)!=s.end())
            {
                continue;
            }
            else
            {
                int count=0;
                curr_el = nums[i];
                while(s.find(curr_el)!=s.end())
                {
                    curr_el++;
                    count++;
                }
                
                ans= max(ans,count);
            }
            
        }
        return ans;
        
        
    }
};