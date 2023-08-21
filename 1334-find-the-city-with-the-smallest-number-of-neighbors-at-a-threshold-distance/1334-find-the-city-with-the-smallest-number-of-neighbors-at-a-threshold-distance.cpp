class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        
        int m = edges.size();
        vector<vector<int>>dist(n,vector<int>(n,1e9)); // dist vector 
        
        for(int i=0;i<m;i++) {
            int u = edges[i][0];
            int v = edges[i][1];
            int wt = edges[i][2];
            
            dist[u][v] = wt;
            dist[v][u] = wt;
            
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                if(i==j) {
                    dist[i][j] = 0;
                }
            }
        }
        // adj matrix done 
        
        // applying floyd warshall
        
        for(int via =0;via<n;via++) {
            for(int i=0;i<n;i++) {
                for(int j=0;j<n;j++) {
                    if(dist[i][via] +  dist[via][j] <=distanceThreshold && dist[i][via] + dist[via][j] < dist[i][j]) {
                        dist[i][j] = dist[i][via] + dist[via][j];
                    }
                }
            }
        }
        // shortest dist matrix created 
        
        int count;
        int ans = INT_MAX;
        int cityn = n;
        for(int i=0;i<n;i++) {
            count =0; // needed for every city
            for(int j=0;j<n;j++) {
                if(dist[i][j] <=distanceThreshold) count++;
            }
            if(count < ans) {
                ans = count;
                cityn = i;
            }
            else if(count==ans) {
                cityn = i;
            }
        }
        return cityn;
        
    }
};