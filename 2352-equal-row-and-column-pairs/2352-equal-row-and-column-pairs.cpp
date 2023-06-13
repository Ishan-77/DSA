class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int ans = 0;
       int m =  grid.size();
        int n =  grid[0].size();
        map<vector<int>,int>mpp;
       for(int i=0;i<grid.size();i++)
       {
           mpp[grid[i]]++;
       }
        for(int i=0;i<grid[0].size();i++)
        {
            vector<int>v;
            for(int j=0;j<m;j++)
            {
                v.push_back(grid[j][i]);
                
            }
            ans+=mpp[v];
        }
        return ans;
        
    }
};