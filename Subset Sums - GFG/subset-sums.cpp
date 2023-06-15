//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void helper(int idx,int sum,vector<int>&fans,vector<int>&arr,int N)
    {
        if(idx>=N)
        {
            fans.push_back(sum);
            return;
        }
        helper(idx+1,sum+=arr[idx],fans,arr,N);
        sum-=arr[idx];
        helper(idx+1,sum,fans,arr,N);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>fans;
        helper(0,0,fans,arr,N);
        return fans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends