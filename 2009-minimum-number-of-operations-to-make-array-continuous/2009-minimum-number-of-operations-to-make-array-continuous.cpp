class Solution {
public:
    int minOperations(vector<int>& nums) {
    
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        int j = 0;
        
        int ans = INT_MAX;
        
        set<int>st(nums.begin(),nums.end());
        vector<int>setarr;
        
        for(int num:st) {
            setarr.push_back(num);
        }
        int  m  = setarr.size();
        
        for(int i=0;i<m;i++) {
            while(j<m &&  setarr[j] < setarr[i] + n) {
                j++;
            }
            ans  = min(ans,n-j+i);
        }
        return ans;
        
    }
};