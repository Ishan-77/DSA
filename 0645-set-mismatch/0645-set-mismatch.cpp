class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        
        unordered_map<int,int>mpp;
        
        
        int missing = 0;
        int duplicate = 0;
        
        for(int i=0;i<nums.size();i++) {
            
            mpp[nums[i]]++;
            
        }
        for(int i=1;i<=nums.size();i++) {
            if(mpp[i]==0) {
                missing = i;
                //break;
            }
            if(mpp[i]==2) {
                duplicate = i;
                //break;
            }
        }
        return {duplicate,missing};
        
    }
};