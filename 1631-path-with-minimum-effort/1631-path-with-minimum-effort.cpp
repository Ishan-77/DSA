class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        int n = heights.size();
        int  m = heights[0].size();
        
        priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int> > > > pq;

        
        vector<vector<int>>dist(n,vector<int>(m,1e9)); // distance vector 
        
        pq.push({0,{0,0}});
        dist[0][0] = 0;
        
        int dr[] = {-1,0,+1,0};
        
        int dc[] = {0,+1,0,-1};
        
        while(!pq.empty()) {
            auto it = pq.top();
            pq.pop();
            
            int diff = it.first;
            int r = it.second.first;
            int c = it.second.second;
            
           
            
            for(int i=0;i<4;i++) {
                int nr = r+dr[i];
                int nc = c+dc[i];
                
                
                 if(r==n-1 && c == m-1) return diff ;
                
                
                if(nr>=0 && nc>=0 && nr<n && nc<m) {
                    int newEffort = max(abs(heights[r][c]  - heights[nr][nc]),diff);
                    if(newEffort < dist[nr][nc]) {
                        dist[nr][nc] = newEffort;
                        pq.push({newEffort,{nr,nc}});
                    }
                }
            }
            
        }
        
        return 0;
        
        
    }
};