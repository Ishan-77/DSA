class Solution {
public:
    
    
    int func(int i,int j1,int j2,vector<vector<int>>&grid, vector<vector<vector<int>>>&dp) {
        int n = grid.size();
        int m = grid[0].size();
        //base cases
        if(j1<0 || j1>=m || j2<0 || j2>=m) return -1e8;
        
        if(dp[i][j1][j2]!=-1) return dp[i][j1][j2];
        
        if(i==n-1) {
            if(j1==j2) return grid[n-1][j1];
            
            else {
                return grid[n-1][j1] + grid[n-1][j2];
            }
        }
 
    
    int maxi = -1e8;
    for(int dj1= -1; dj1<=+1; dj1++) { // alice
        for(int dj2= -1; dj2<=+1; dj2++) {  // bob (3*3) combinations 
            int val = 0;
           if(j1==j2)  val+=grid[i][j1];
            else val+=grid[i][j1] + grid[i][j2];
            
            val+=func(i+1,j1+dj1,j2+dj2,grid,dp);
            
            maxi = max(maxi,val);
        }
    }
    return dp[i][j1][j2] =  maxi;
        
   }
    
    int cherryPickup(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(m,-1))); // 3d dp array
        
        return func(0,0,m-1,grid,dp);
        
        
    }
};