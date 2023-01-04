class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(m[i]==0)
            {
                return i;
            }
        }
        return nums.size();
    }
};