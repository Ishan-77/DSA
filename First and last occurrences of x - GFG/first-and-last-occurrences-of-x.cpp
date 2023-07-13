//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans;
    
    int first  = -1;
    
    int last  = -1;
    
    int l=0;
    int h = n-1;

    
    while(l<=h)
    {
        int mid = (l+h)/2;
        
        if(arr[mid] == x)
        {
            first = mid;
            h = mid-1;
        }
        else if(arr[mid] > x)
        {
            h = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    l=0;
    h = n-1;
    
    while(l<=h)
    {
        int mid = (l+h)/2;
        
        if(arr[mid] == x)
        {
            last =  mid;
            l = mid+1;
        }
        else if(arr[mid] > x)
        {
            h = mid-1;
        }
        else
        {
            l= mid+1;
        }
    }
    ans.push_back(first);
    ans.push_back(last);
    return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends