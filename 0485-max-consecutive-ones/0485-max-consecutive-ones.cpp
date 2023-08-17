class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxcount = 0;
        int cnt1=0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]==1) {
                cnt1++;
                maxcount = max(maxcount,cnt1);
            }
            else {
                cnt1=0;
            }
        }
        return maxcount;
        
    }
};