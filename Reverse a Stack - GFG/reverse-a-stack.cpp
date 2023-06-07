//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void insertAtbottom(int x,stack<int>&S) {
    // base case
    if(S.empty())
    {
        S.push(x);
        return;
    }
    int temp =  S.top();
    S.pop();
    insertAtbottom(x,S);
    S.push(temp);
}
    void Reverse(stack<int> &S){
        // base case
        if(S.empty()) return;
        
        int x = S.top();
        S.pop();
        Reverse(S);
        insertAtbottom(x,S);
        
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends