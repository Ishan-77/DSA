class Solution {
public:
    
    
    void dfs(int r,int c,vector<vector<int>>&vis,vector<vector<char>>&board) {
        int dr[] = {-1,0,+1,0};
        int dc[] = {0,+1,0,-1};
        int n  = board.size(); //row
        int m = board[0].size(); // col
        vis[r][c]=1;
        for(int i=0;i<4;i++) {
            int nr = r+dr[i];
            int nc = c+dc[i];
            
            if(nr>=0 && nc>=0 && nr<n && nc<m && vis[nr][nc]==0 && board[nr][nc]=='O') {
                dfs(nr,nc,vis,board);
            }
        }
        
    }
    void solve(vector<vector<char>>& board) {
        
        int n = board.size();
        int m = board[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0)); // vis matrix created
        
        for(int i=0;i<m;i++) {    // 1st row and last row  and not visited
            if(board[0][i]=='O' && vis[0][i]==0) {
                dfs(0,i,vis,board);
            }
            if(board[n-1][i]=='O' && vis[n-1][i]==0) {
                dfs(n-1,i,vis,board);
            }
            
        }
        // 1st and last col
        for(int j=0;j<n;j++){
            if(board[j][0]=='O' && vis[j][0]==0) {
                dfs(j,0,vis,board);
            }
            if(board[j][m-1]=='O' && vis[j][m-1]==0) {
                dfs(j,m-1,vis,board);
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(vis[i][j]==0 && board[i][j]=='O') {
                    board[i][j] ='X';
                    
                }
            }
        }
        
    }
};