//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char,int>mpp;
        
        int i=0;
        int ans = -1;
        for(int j=0;j<s.size();j++) {
            mpp[s[j]]++;
            
            while(mpp.size() > k) {
                mpp[s[i]]--;
                if(mpp[s[i]]==0) {
                    mpp.erase(s[i]);
                }
                i++;
            }
            if(mpp.size()==k)
            ans = max(ans,j-i+1);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends