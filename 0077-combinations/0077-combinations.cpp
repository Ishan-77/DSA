class Solution {
public:
    
    void combine(vector<vector<int>>&fans,vector<int>&ans,int idx,int n,int k) {
        
        if(ans.size()==k) {
            fans.push_back(ans);
            return;
        }
        for(int i = idx;i<=n;i++)
        {
            ans.push_back(i);
            combine(fans,ans,i+1,n,k);
            ans.pop_back();
        }
        
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>fans;
        vector<int>ans;
        
        combine(fans,ans,1,n,k);
        
        return fans;
        
    }
};