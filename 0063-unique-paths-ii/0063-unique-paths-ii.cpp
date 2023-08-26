class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int n = obstacleGrid.size();
        int m = obstacleGrid[0].size();
        
        int dp[n][m];
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(obstacleGrid[i][j]==1) dp[i][j] = 0;
                
                else if(i==0 && j==0) dp[i][j] = 1;
                
                else 
                {
                    int up =0;
                    int bottom = 0;
                    
                    if(i>0) up = dp[i-1][j];
                    
                    if(j>0) bottom = dp[i][j-1];
                    
                    
                    dp[i][j] = up+bottom;
                }
                
            }
        }
        return dp[n-1][m-1];
        
    }
};