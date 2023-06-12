class Solution {
public:
    
    
    void helper(int n,string output,vector<string>&ans,int cc,int oc)
    {
       if(oc == n && cc == n)
       {
           ans.push_back(output);
           return;
       }
        if(oc<n)
        {
            helper(n,output+'(',ans,cc,oc+1);
        }
        if(cc<oc)
        {
            helper(n,output+')',ans,cc+1,oc);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int oc = 0;
        int cc = 0;
        string output = "";
        helper(n,"",ans,0,0);
        return ans;
    }
};