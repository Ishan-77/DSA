class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
       int count=0;
        unordered_map<int,int>mpp;
        for(auto n:nums)
        {
            int res =  k-n;
            if(mpp[res]> 0)
            {
                count++;
                mpp[res]--;
            }
            else
            {
                mpp[n]++;
            }
        }
        return count;
    }
};