class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        int n = nums.size();
        
        vector<int>dp(n,1);
        vector<int>hash(n);
        
        int lastIndex;
        int maxi = INT_MIN;
        
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<n;i++) {
            hash[i] = i;
            
            for(int prev=0;prev<i;prev++) {
                if(nums[i]%nums[prev]==0 && 1+dp[prev] > dp[i]) {
                    dp[i] = 1+dp[prev];
                    hash[i] = prev;
                }
            }
            if(dp[i] > maxi) {
                maxi = dp[i];
                lastIndex = i;
            }
        }
        vector<int>ans;
        
        while(hash[lastIndex]!=lastIndex) {
            ans.push_back(nums[lastIndex]);
            lastIndex = hash[lastIndex];
            
        }
        ans.push_back(nums[lastIndex]);
        // no need to reverse  because any order allowed
        return ans;
        
    }
};