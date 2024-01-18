class Solution {
public:
    
    
    void bfs(int row,int col,vector<vector<char>>&grid,vector<vector<bool>>&vis) {
        
       int n = grid.size();  //row
       int m = grid[0].size(); // col
        
        queue<pair<int,int>>q;
        vis[row][col] = true;
        q.push({row,col});
        
        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,1,0,-1};
        
       while(!q.empty()) {
           int r = q.front().first;
           int c = q.front().second;
           
           q.pop();
           
           
           for(int k=0;k<4;k++) {
               int nr = r+dr[k];
               int nc = c+dc[k];
               
               if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]=='1' && !vis[nr][nc]) {
                   vis[nr][nc]= true;
                   bfs(nr,nc,grid,vis);
               }
           }
           
           
           
           
           
           
           
           
           
           
       }
        
    }
    int numIslands(vector<vector<char>>& grid) {
        
        int n = grid.size(); //row
        int m = grid[0].size();    // col
        
        vector<vector<bool>>vis(n,vector<bool>(m,false)); // vis
        
        int count  = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]=='1' && !vis[i][j]) {
                    count++;
                    bfs(i,j,grid,vis);
                }
            }
        }
        return count;
        
    }
};