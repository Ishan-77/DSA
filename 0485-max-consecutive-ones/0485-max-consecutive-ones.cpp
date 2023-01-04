class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                
                maxcount=max(count,maxcount);
            }
            else
            {
                count=0;
            }
        }
        
        
        return maxcount;
    }
};