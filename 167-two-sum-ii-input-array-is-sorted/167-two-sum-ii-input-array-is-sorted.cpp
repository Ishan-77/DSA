class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l=0;
        int h=nums.size()-1;
        int mid;
        while(l<h)
        {
          mid = l+(h-l)/2;
            
            if(nums[l]+nums[h]==target)
            {
                return {l+1,h+1};
            }
            else if(nums[l]+nums[h]>target)
            {
                h--;
            }
            else
            {
                l++;
            }
        }
        return {};
        
    }
};