//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        // applying djiksta algo
        queue<pair<int,pair<int,int>>>q; // {dist,{row,col}};
        int n = grid.size(); // row
        int  m = grid[0].size(); // col
        
        q.push({0,{source.first,source.second}});
        
        // distance array
        vector<vector<int>>dist(n,vector<int>(m,1e9));
        dist[source.first][source.second] = 0;
        
        
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};
        while(!q.empty()) {
            auto it = q.front();
            int distance = it.first;
            int r = it.second.first;
            int c = it.second.second;
            q.pop();
            
            for(int i=0;i<4;i++) {
                int nr = r+drow[i];
                int nc = c+ dcol[i];
                
                if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1 && distance+1 < dist[nr][nc]) {
                    dist[nr][nc] = distance+1;
                    if(nr == destination.first && nc == destination.second) return distance+1;
                    q.push({distance+1,{nr,nc}});
                }
            }
        }
        if(source.first == destination.first && source.second == destination.second) return 0;
        else return -1;
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

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends