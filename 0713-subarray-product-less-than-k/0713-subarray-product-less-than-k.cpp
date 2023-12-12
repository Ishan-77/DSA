class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int i=0;
        int prod = 1;
        int ans = 0;
        
        if(k<=1) return 0;
        
        for(int j=0;j<nums.size();j++) {
            prod*=nums[j];
            
            while(prod >=k) {
                prod/=nums[i];
                i++;
            }
            
            ans+=j-i+1;            
            
        }
        return ans;
        
    }
};