class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int i=0;
        
        int sum = 0;
        
        int len = INT_MAX;
        int len2 = 0;
        
        
        for(int j=0;j<nums.size();j++) {
            sum+=nums[j];
            
            while(sum>=target){
                len2 = j-i+1;
                len = min(len,len2);
                sum-=nums[i];
                i++;
            }
        }
        if(len==INT_MAX)return 0;
        else return len;
        
    }
};