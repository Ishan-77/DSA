class Solution {
public:
    
    int atmost(vector<int>&nums,int k) {
        int i=0;
        int ans =0;
        int count = 0; // odd count
        for(int j=0;j<nums.size();j++) {
            if(nums[j]%2==1) count++;
            
            while(count > k) {
                if(nums[i]%2==1) count--;
                i++;
            }
            ans+=j-i+1;
        }
        return ans;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int ans = atmost(nums,k) - atmost(nums,k-1);
        return ans;
        
        
        
        
    }
};