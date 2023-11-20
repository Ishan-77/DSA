class Solution {
public:
    
    int maxadjsum(vector<int>arr) {
        
        int n = arr.size();
        int prev = arr[0];
        int prev2 = 0;
        
        for(int i=1;i<n;i++) {
            int take = arr[i];
            if(i>1) take+=prev2;
            
            int nottake =  prev;
            int curi = max(take,nottake);
            prev2 = prev;
            prev = curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        
        int len = nums.size();
        
        if(len==1) return nums[0];
        vector<int>v1;
        vector<int>v2;
        
        for(int i=0;i<len;i++) {
            if(i!=0) {
                v1.push_back(nums[i]);
            }
            if(i!=len-1) {
                v2.push_back(nums[i]);
            }
        }
        return max(maxadjsum(v1),maxadjsum(v2));
    }
};