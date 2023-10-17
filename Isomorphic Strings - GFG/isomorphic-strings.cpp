//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        
        if(str1.size()!=str2.size()) return false;
        unordered_map<char,char>mpp;
        
        unordered_map<char,bool>mpp2;
        
        for(int i=0;i<str1.size();i++) {
            if(mpp.find(str1[i])!=mpp.end()) {
                if(mpp[str1[i]]!=str2[i]) return false;
            }
            else {
                if(mpp2[str2[i]]) return false;
            }
            mpp[str1[i]] = str2[i];
            mpp2[str2[i]] = true;
        }
        return true;
        
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends