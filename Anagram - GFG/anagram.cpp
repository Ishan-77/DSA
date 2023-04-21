//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        
        if(a==b) return true;
        
        // Your code here
        unordered_map<char,int>mpp;
        for(int i=0;i<b.size();i++)
        {
            mpp[a[i]]++;
            mpp[b[i]]--;
        }
        for(auto it:mpp)
        {
            if(it.second>0) return false;
        }
        return true;
        
        
        
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends