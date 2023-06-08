class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
       int m  =grid.size();
        int n  = grid[0].size();
        
        int i =0;
        int j  = n-1;
        int ans = 0;
        
        while(i>=0 && i<m && j>=0 && j<n)
        {
            if(grid[i][j] < 0)
            {
                ans+= m-i;
                j--;
                
            }
            else if(grid[i][j]>=0)
            {
                i++;
            }
        }
        return ans;
    }
};