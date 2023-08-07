class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        int n = mat.size(); //row
        int m = mat[0].size(); // col
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        vector<vector<int>>dis(n,vector<int>(m,0));
        
        queue<pair<pair<int,int>,int>>q; //({{r,c},dis});
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(mat[i][j]==0) {
                    q.push({{i,j},0}); //row col and dist;
                    vis[i][j]=1;
                }
            }
        }
        
        int drow[] = {-1,0,+1,0}; // 4 directions row
        int dcol[] = {0,+1,0,-1}; // 4 directions col
        while(!q.empty()) {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int dist = q.front().second;
            q.pop();
            dis[row][col] = dist;
            
            for(int i=0;i<4;i++) {
                int nrow = row+drow[i];
                int ncol = col +dcol[i];
                
                if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && mat[nrow][ncol]==1 && vis[nrow][ncol]==0)
                {
                    q.push({{nrow,ncol},dist+1});
                    vis[nrow][ncol]=1;
               
                
                }
            }
            
            
        }
        return dis;
    }
};