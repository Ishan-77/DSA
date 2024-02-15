class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        
        if(nums.size() < 3) return -1;
        
        sort(nums.begin(),nums.end());
        
        long long sum = 0;
        
        long long p = 0;
        
        
        sum = nums[0]+nums[1];
        
        for(int i=2;i<nums.size();i++) {
            if(sum > nums[i]) {
                p = sum+nums[i];
            }
            sum+=nums[i];
        }
        if(p==0) return -1;
        else return p;
        
        
    }
};