//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
        
        vector<int> ans(N);
        
        unordered_map<int,int>mpp;
        
        vector<int>temp =arr;
        
        sort(temp.begin(),temp.end());
        
        mpp[temp[0]] = 1;
        
        for(int i=1;i<N;i++)
        {
            if(temp[i] == temp[i-1])
            {
                mpp[temp[i]] =  mpp[temp[i-1]];
            }
            else
            {
                mpp[temp[i]]  = mpp[temp[i-1]]+1;
            }
        }
        
        for(int i=0;i<N;i++)
        {
            ans[i] =  mpp[arr[i]];
        }
        
        return ans;


    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends