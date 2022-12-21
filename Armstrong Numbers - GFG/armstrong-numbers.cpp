//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int d1,d2,d3;
        int x=n;
        d1=x%10;
        x=x/10;
        d2=x%10;
        x=x/10;
        d3=x%10;
        
        if(pow(d1,3)+pow(d2,3)+pow(d3,3)==n) return "Yes";
        
        else
        return "No";
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends