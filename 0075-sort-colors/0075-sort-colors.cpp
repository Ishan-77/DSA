class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        
        int low=0;
        int mid=0;
        int high=nums.size()-1;
        
        while(mid<=high)
        {
            if(nums[mid]==0) swap(nums[mid++],nums[low++]);
            else if(nums[mid]==1) mid++;
            else swap(nums[mid],nums[high--]);
                
                
        }
    }
};