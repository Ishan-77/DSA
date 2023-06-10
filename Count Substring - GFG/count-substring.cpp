//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int i=0;
        int j=0;
        int n  = s.size();
        int count=0;
        unordered_map<char,int>mpp;
        while(j<n)
        {
            mpp[s[j]]++;
            
        while(mpp['a']>0 && mpp['b']>0 && mpp['c']>0)
        {
           count+=n-j;
           mpp[s[i]]--;
           i++;
        }
        j++;
        
        }
        return count;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends