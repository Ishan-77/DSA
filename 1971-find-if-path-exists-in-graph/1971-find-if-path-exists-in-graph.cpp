class Solution {
public:
    
    
    
    bool dfs(int src,int dest,vector<int>adj[],vector<bool>&vis) {
        if(src==dest) return true;
        
        vis[src] = true;
        
        for(auto it:adj[src]) {
            if(!vis[it]&& dfs(it,dest,adj,vis)) return true;
        }
        return false;
    }
   
   
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        
        // creating adj list
        
        
        vector<int>adj[n];
        
        
        for(auto edge:edges) {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        // creation done
        
        vector<bool>vis(n,false);
        
        return dfs(source,destination,adj,vis);
        
    }
};