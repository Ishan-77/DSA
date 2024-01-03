class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int cnt = 0;
        
        int prev= 0;
        int ans =0;
        
        
        for(auto b:bank) {
           cnt = count(b.begin(),b.end(),'1');
            
            if(cnt>0) {
                ans+=cnt*prev;
                prev = cnt;
            }
        }
        return ans;
        
    }
};