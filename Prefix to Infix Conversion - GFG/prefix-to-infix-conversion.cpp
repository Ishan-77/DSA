//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string preToInfix(string pre_exp) {
        // Write your code here
        
        string ans="";
        stack<string>st;
        for(int i=pre_exp.size()-1;i>=0;i--)
        {
            if((pre_exp[i]>='A' && pre_exp[i]<='Z') ||(pre_exp[i]>='a' && pre_exp[i]<='z') || (pre_exp[i]>='0' && pre_exp[i]<='9'))
            {
                string p="";
                p+=pre_exp[i];
                st.push(p);
            }
            else
            {
                string t1 = st.top();
                st.pop();
                string t2 =  st.top();
                st.pop();
                st.push("("+t1+pre_exp[i]+t2+")");
            }
            
        }
        return st.top();
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends