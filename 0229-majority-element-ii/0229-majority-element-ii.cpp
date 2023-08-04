class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        vector<int>ans;
        int candidate1=0;
        int candidate2=0;
        int life1=0;
        int life2=0;
        
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==candidate1) {
                life1++;
            }
            else if(nums[i]==candidate2) {
                life2++;
            }
            else if(life1==0) {
                candidate1 =  nums[i];
                life1=1;
            }
            else if(life2==0) {
                candidate2 =  nums[i];
                life2 = 1;
            }
            else {
                life1--;
                life2--;
            }
            
        }
        // we iterate again to get our ans
        life1=0;
        life2=0;
        int tar =  floor(nums.size()/3);
          
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==candidate1) life1++;
            else if(nums[i]==candidate2) life2++;
        }
        if(life1 > tar) ans.push_back(candidate1);   // both if statement because both ans can be correct
        if( life2 > tar) ans.push_back(candidate2);
        return ans;
    }
};