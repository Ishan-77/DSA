class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int n = nums.size();
        int total_sum = 0;
        for(int i=0;i<n;i++) {
            total_sum+=nums[i];
        }
        if(total_sum == x) return nums.size();
        
        int target  = total_sum - x; // sum of non pick elements
        
        
        // sliding window technique
        
        int start =0;
        int end  = 0;
        
        
        int ans = 0;
        
        int sum = 0;
        
        while(end  < n) {
            sum+=nums[end];
            
              
            while( start < end && sum > target) {
                sum-=nums[start];
                start++;
            }
            
            if(sum==target) {
                
                ans =  max(ans,end-start+1);
                
            }
            
            end++;  
        }
        if(ans==0) return -1;
        else return n-ans;
        
    }
};