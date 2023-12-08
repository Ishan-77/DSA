//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        unordered_map<char,int>mpp;
        
        int ans = 0;
        int i=0;
        for(int j=0;j<S.size();j++) {
            mpp[S[j]]++;
            
            while(mpp[S[j]] > 1) {
                mpp[S[i]]--;
                if(mpp[S[i]]==0) {
                    mpp.erase(S[i]);
                }
                i++;
            }
            ans = max(ans,j-i+1);
        }
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
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends