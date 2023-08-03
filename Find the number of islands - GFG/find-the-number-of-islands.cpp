//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    
    
    void bfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&grid) {
        int n = grid.size(); // row
        int m = grid[0].size(); // col
        vis[r][c] = 1; // visited
        queue<pair<int,int>>q; // storing row and col num;
        q.push({r,c});
        while(!q.empty()) {
            int row = q.front().first;
            int col = q.front().second;
            q.pop();
            
            // neighbors
            for(int dr =  -1;dr<=1;dr++) {  // 8 directions
                for(int dc = -1;dc<=1;dc++) {
                    int nr = row+dr;
                    int nc = col + dc;
                    
                    if(nr>=0 && nr<n && nc>=0 && nc<m && !vis[nr][nc] && grid[nr][nc]=='1') {
                        vis[nr][nc] =1;
                        q.push({nr,nc});
                    }
                    
                }
            }
            
            
        }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size(); // row
        int m  = grid[0].size(); // col
        
        int count = 0;
        
        vector<vector<int>>vis(n,vector<int>(m,0)); // making a  visiting 2d array;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == '1' && !vis[i][j]) {
                    count++;
                    bfs(i,j,vis,grid);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends