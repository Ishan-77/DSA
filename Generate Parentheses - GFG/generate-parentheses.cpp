//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
    public:
    void helper(int oc,int cc,string output,vector<string>&ans,int n)
    {
        if(oc==n && cc==n)
        {
            ans.push_back(output);
            return;
        }
        if(oc<n)
        {
            output.push_back('(');
          helper(oc+1,cc,output,ans,n);
          output.pop_back();
        }
        if(cc<oc)
        {
            output.push_back(')');
            helper(oc,cc+1,output,ans,n);
            output.pop_back();
        }
        
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string>ans;
        string output="";
        int oc=0;
        int cc =0;
        helper(oc,cc,"",ans,n);
        return ans;
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends