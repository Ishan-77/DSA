class Solution {
public:
    
    
    void dfs(int node,vector<int>adj[],vector<bool>&vis) {
        vis[node]= true;
        for(auto it:adj[node]){
            if(!vis[it]) {
                dfs(it,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        
        // create adj list
        
        
        vector<int>adj[n+1];
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(isConnected[i][j]==1 && i!=j) {
                    adj[i+1].push_back(j+1);
                    adj[j+1].push_back(i+1);
                    
                }
            }
        }
        // created
        int count = 0;
        vector<bool>vis(n+1,false);
        
        for(int i=1;i<=n;i++) {
            if(!vis[i]){
                count++;
                dfs(i,adj,vis);
            }
        }
        return count;
        
    }
};