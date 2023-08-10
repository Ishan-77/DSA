//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  bool dfscheck(int s,int vis[],int pathvis[],int check[],vector<int>adj[]) {
      vis[s] = 1;
      pathvis[s] =1;
      for(auto it:adj[s]) {
          if(!vis[it]) {
              if(dfscheck(it,vis,pathvis,check,adj)==true) return true;
          }
         else if(pathvis[it]) return true;
      }
      check[s] =1;
      pathvis[s] = 0;
      return false;
  }
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int>ans;
        
         int vis[V] = {0};
         int pathvis [V] = {0};
         int check[V] = {0};
         
         for(int i=0;i<V;i++) {
             if(!vis[i]) {
                 dfscheck(i,vis,pathvis,check,adj);
             }
         }
         for(int i=0;i<V;i++) {
             if(check[i] ==1) {
                 ans.push_back(i);
             }
         }
         return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        int V, E;
        cin >> V >> E;
        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> safeNodes = obj.eventualSafeNodes(V, adj);
        for (auto i : safeNodes) {
            cout << i << " ";
        }
        cout << endl;
    }
}

// } Driver Code Ends