class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(n==1 && !trust.size()) return 1;
        
        vector<int>out(n+1,0);
        vector<int>in(n+1,0);
        
        
        for(auto it:trust) {
            out[it[0]]++;
            in[it[1]]++;
            
        }
        
        for(int i=0;i<=n;i++) {
            if(in[i]==n-1 && out[i]==0){
                return i;
            }
        }
        return -1;
        
    }
};