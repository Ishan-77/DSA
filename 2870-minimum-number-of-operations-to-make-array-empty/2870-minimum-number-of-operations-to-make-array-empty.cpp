class Solution {
    
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>mpp;
        
        int count = 0;
        
        for(int i=0;i<nums.size();i++) {
            mpp[nums[i]]++;
        }
        // freq map ready
        
        for(auto it:mpp) {
            int freq = it.second;
            if(freq==1) return -1;
            
            if(freq%3==0){
                count+=freq/3;
            }
            else {
                count+=freq/3+1;
            }
        }
        return count;
    }
};