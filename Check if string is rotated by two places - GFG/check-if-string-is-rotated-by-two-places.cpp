//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string a, string b)
    {
        // Your code here
        if(a.size()!=b.size()) return false;


    // clock wise rotate

    bool clock  = true;
    bool anticlock = true;

    int n = a.size();

    for(int i=0;i<a.size();i++) {
      if(a[(i+2)%n]!=b[i]) {
        clock = false;
        break;
        
      }
    }
    // anti clock rotation 

    for(int i=0;i<a.size();i++) {
        if(b[(i+2)%n]!=a[i]) {
            anticlock = false;
            break;
        }
    }
    return anticlock || clock;
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends