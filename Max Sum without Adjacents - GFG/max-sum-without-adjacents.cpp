//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	
	int fun(int *arr,int idx,vector<int>&dp) {
	    if(idx==0) return arr[0];
	    if(idx < 1) return 0;
	    if(dp[idx]!= -1) return dp[idx];
	    int take = arr[idx] +  fun(arr,idx-2,dp);
	    int nottake = 0 +  fun(arr,idx-1,dp);
	    
	    return dp[idx] =  max(take,nottake);
	}
	int findMaxSum(int *arr, int n) {
	    
	   
	    // code here
	    vector<int>dp(n+1,-1);
	    return fun(arr,n-1,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends