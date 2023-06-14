class Solution {
public:
    
    void helper(int ind,int sum,int n,int k,vector<vector<int>>&fans,vector<int>&ans)
    {
        // base
        
        if(k==0 && sum==n)
        {
            fans.push_back(ans);
            return;
        }
        
        
        for(int i=ind;i<=9;i++)
        {
           
            ans.push_back(i);
            sum+=i;
            helper(i+1,sum,n,k-1,fans,ans);
            ans.pop_back();
            sum-=i;
            
        }
        
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> fans;
        vector<int>ans;
        helper(1,0,n,k,fans,ans);
        return fans;
    }
};