class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        int psum=0;
        unordered_map<int,int>mpp;
         // imp step
        mpp[0]=1;
    
        for(int i=0;i<nums.size();i++)
        {
            psum+=nums[i]; // prefix sum
            if(mpp.find(psum-k)!=mpp.end())
            {
                count+=mpp[psum-k];
            }
            mpp[psum]++;
        }
        return count;
    }
};