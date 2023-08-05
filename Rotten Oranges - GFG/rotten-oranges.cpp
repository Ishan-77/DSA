//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        vector<vector<int>>vis = grid; // visited array;
        queue<pair<pair<int,int>,int>>q; //{{r,c},int}
        int n = grid.size(); // row
        int m = grid[0].size(); // col
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++){
                if(grid[i][j]==2) {
                    q.push({{i,j},0});
                }
            }
        }
        
        int drow[] = {-1,0,1,0};
        int dcol [] = {0,1,0,-1};
        int max_time = 0;
        while(!q.empty()) {
            int r = q.front().first.first; // row
            int c =  q.front().first.second; // col
            int t = q.front().second; // time;
            q.pop();
            max_time = max(max_time,t);
            // neighbors
            for(int i=0;i<4;i++){  // 4 directions 
                int nr =r+drow[i];
                int nc =c + dcol[i];
                
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==1 && vis[nr][nc]!=2){
                    q.push({{nr,nc},t+1});
                    vis[nr][nc]=2;
                    
                }
            }
        }
        // we have to check wether all oranges are rotten or not
       for(int i=0;i<n;i++) {
           for(int j=0;j<m;j++) {
               if(vis[i][j]==1) return -1; // not all oranges rotten
           }
       }
       return max_time;
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends