//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
// int maxArea(int A[], int len);

// } Driver Code Ends
//User function template for C++

long long maxArea(long long A[], int len)
{
    // Your code goes here
    int l=0;
    long long fans = 0;
    long long ans = 0;
    int r = len-1;
    while(l<r)
    {
        if(A[l] < A[r])
        {
           ans = A[l] * (r-l);
           l++;
        }
        else if(A[r] < A[l])
        {
            ans =  A[r] * (r-l);
            r--;
        }
        else
        {
            ans  = A[l] * (r-l);
            l++;
            r--;
        }
        if(ans >  fans) fans  = ans;
        
    }
    return fans;
}

//{ Driver Code Starts.

// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
        int n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cout<<maxArea(arr,n)<<endl;
    }
return 0;
}

// } Driver Code Ends