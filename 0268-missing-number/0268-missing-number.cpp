class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int exor=0;
        
        for(int i=0;i<=nums.size();i++)
        {
            exor=exor^i;
        }
        
        for(int num:nums)
        {
            exor=exor^num;
        }
        return exor;
    }
};