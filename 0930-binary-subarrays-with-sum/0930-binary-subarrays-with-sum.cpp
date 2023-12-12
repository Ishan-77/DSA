class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        unordered_map<int,int>mpp;
        
        mpp[0] = 1;
        
        int ans = 0;
        
        int psum  = 0;
        
        for(int i=0;i<nums.size();i++) {
            psum+=nums[i];
            int rsum =  psum-goal;
            
            if(mpp.find(rsum)!=mpp.end()) {
               ans+=mpp[rsum]; 
            }
            mpp[psum]++;
        }
        return ans;
        
    }
};