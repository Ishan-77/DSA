class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m=grid.size();
        int n = grid[0].size();
        vector<int>ans;
        for(int col=0;col<n;col++)
        {
            int curr_col=col;
            for(int curr_row=0;curr_row<m;curr_row++)
            {
                int next_col=curr_col+grid[curr_row][curr_col];
                if(next_col<0 || next_col>=n||grid[curr_row][curr_col]!=grid[curr_row][next_col])
                {
                    curr_col=-1;
                     break;
                }
                curr_col=next_col;
            }
            ans.push_back(curr_col);
        }
        return ans;
    }
};