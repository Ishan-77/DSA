class Solution {
public:
    
    int atmostk(vector<int>&nums,int k) {
        int i=0;
        
        int ans  = 0;
        
        unordered_map<int,int>mpp;
        
        for(int j=0;j<nums.size();j++) {
            mpp[nums[j]]++;
            
            while(mpp.size() > k) {
                mpp[nums[i]]--;
                if(mpp[nums[i]]==0) {
                    mpp.erase(nums[i]);
                }
                i++;
            }
            ans+=j-i+1;
            
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostk(nums,k)-atmostk(nums,k-1);
    }
};