class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int candidate = nums[0];
        int life  =1;
        
        for(int i=1;i<nums.size();i++) {
            if(nums[i]==candidate) life++;
            
            else if(life==0) {
                candidate = nums[i];
                life = 1;
                
            }
            else {
                life--;
            }
        }
        return candidate;
        
    }
};