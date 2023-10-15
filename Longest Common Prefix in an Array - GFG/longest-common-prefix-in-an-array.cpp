//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int n)
    {
        // your code here
        sort(arr,arr+n);

    string ans = "";

    string firstword = arr[0];
    string  lastword =  arr[n-1];

    int i=0;
    int j = 0;

    //int minsWordSize = min(firstword.size(),lastword.size());

    while(i< firstword.size() && j  < lastword.size()) {
        if(firstword[i]!=lastword[j]) {
            break;
        }
        ans+=firstword[i];

        i++;
        j++;

    }
    if(ans=="") return "-1";
    else return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends