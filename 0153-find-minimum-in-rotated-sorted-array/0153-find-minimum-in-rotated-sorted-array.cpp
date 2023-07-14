class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans = INT_MAX;
        
        int l = 0;
        int h = nums.size()-1;
        
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            
            if(nums[l] <= nums[mid])  // left sorted 
            {
                ans = min(ans,nums[l]);
                
                l = mid+1;
            }
            else // right sorted 
            {
               ans =  min(ans,nums[mid]);
                h = mid-1;
            }
        }
        return ans;
        
    }
};