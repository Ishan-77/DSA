class Solution {
public:
    
    
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<int>>&grid) {
        
        int n = grid.size(); // row
        int m = grid[0].size(); // col
        vis[r][c]=1;
        
        int dr[] ={-1,0,+1,0};
        int dc[] = {0,+1,0,-1};
        for(int i=0;i<4;i++) {
            int nr = r+dr[i];
            int nc = c+dc[i];
            
            if(nr>=0 && nc>=0 && nr<n && nc<m && grid[nr][nc]==1 && vis[nr][nc]==0) {
                dfs(nr,nc,vis,grid);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size(); // row
        int m = grid[0].size(); // col
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int i=0;i<m;i++) { //1st and last row
            
            if(grid[0][i]==1 && vis[0][i]==0) {
                dfs(0,i,vis,grid);
            }
            if(grid[n-1][i]==1 && vis[n-1][i]==0) {
                dfs(n-1,i,vis,grid);
            }
        }
        // 1st col and last col
        for(int j=0;j<n;j++) {
            
            if(grid[j][0]==1 && vis[j][0]==0) {
                dfs(j,0,vis,grid);
            }
            if(grid[j][m-1]==1 && vis[j][m-1]==0) {
                dfs(j,m-1,vis,grid);
            }
        }
        int total_Lcell=0;
        int bound_Lcell = 0;
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j]==1) {
                    total_Lcell++;
                }
                if(vis[i][j]==1) {
                    bound_Lcell++;
                }
            }
        }
        return total_Lcell-bound_Lcell;
        
    }
};