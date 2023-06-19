class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    double ans = INT_MIN;
        double sum =0;
        int i=0;
        for(int i=0;i<k;i++)
        {
            sum+=nums[i];
        }
        ans = max(ans,sum/k);
        for(int j =  k;j<nums.size();j++)
        {
            sum+=nums[j];
            sum-=nums[j-k];
            ans =  max(ans,sum/k);
        }
        return ans;
    }
};