class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int idx = nums.size()-1;
        
        
        for(int i=nums.size()-2;i>=0;i--) {
            if(nums[i]+i >= idx) {
                idx = i;
            }
        }
        if(idx==0) return true;
        else return false;
        
    }
};