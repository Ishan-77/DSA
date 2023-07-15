class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        if(nums.size() == 1) return 0;
        
        
        int ans =0;
        
        
        
        int l=0;
        int h = nums.size()-1;
        
        while(l<h)
        {
            int mid = l+(h-l)/2;
            
            if(nums[mid] > nums[mid+1])
            {
                h = mid;
            }
            else
            {
                l = mid+1;
            }
        }
        return l;
        
    }
};