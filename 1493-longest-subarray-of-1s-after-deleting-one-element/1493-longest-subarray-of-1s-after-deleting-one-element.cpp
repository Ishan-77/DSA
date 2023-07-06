class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int ans = 0;
        int cz = 0;
        int l = 0;
        
        for (int r = 0; r < nums.size(); r++) {
            if (nums[r] == 0)
                cz++;
            
            while (cz > 1) {
                if (nums[l] == 0) {
                    cz--;
                }
                l++;
            }
            
            ans = max(ans, r - l);
        }
        
        return ans;
    }
};
