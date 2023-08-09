//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  void dfs(int r,int c,vector<vector<int>>&vis,vector<pair<int,int>>&vec,vector<vector<int>>&grid,int rb,int rc) {
      int n = grid.size();
      int m = grid[0].size();
      vis[r][c]=1;
      vec.push_back({r-rb,c-rc});
      
      int dr[] ={-1,0,+1,0};
      int dc[]={0,-1,0,+1};
      for(int i=0;i<4;i++) {
          int nr = r+dr[i];
          int nc = c+dc[i];
          
          if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1 && vis[nr][nc]==0) {
              dfs(nr,nc,vis,vec,grid,rb,rc);
          }
      }
  }
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        int n = grid.size(); //row
        int m = grid[0].size(); //col
        vector<vector<int>>vis(n,vector<int>(m,0)); // visited array
        set<vector<pair<int,int>>>st;
        //vector<pair<int,int>>vec; wrong !!!!!
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]==1 && vis[i][j]==0){
                     vector<pair<int,int>>vec;
                    dfs(i,j,vis,vec,grid,i,j); // here 2nd last and last i,j are base;
                    st.insert(vec);
                }
            }
        }
        return st.size();   // set only stores unique no duplicates
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends