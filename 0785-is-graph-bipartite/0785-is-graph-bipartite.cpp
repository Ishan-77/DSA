class Solution {
public:
    
    bool dfs(int src,int color,vector<int>adj[],int vis[],vector<vector<int>>& graph) {
        vis[src] = color;
        for(auto it:adj[src]) {
            if(vis[it]==-1) {
                if(dfs(it,!color,adj,vis,graph)==false) return false; // if any dfs call return false then we return false;
            }
            else if(vis[it]==vis[src]) return false;
        }
        return true;
        
    }
    bool isBipartite(vector<vector<int>>& graph) {
        // creating adj list
        int v = graph.size();
        vector<int>adj[v];
        
        for(int i=0;i<v;i++) {
            adj[i] = graph[i];
        }
        // adj list ceated;
        
        int vis[v];
        for(int i=0;i<v;i++) {
            vis[i] = -1;
        }
        for(int i=0;i<v;i++) {
            if(vis[i]==-1) {
                if(dfs(i,0,adj,vis,graph) == false) return false;
            }
            
        }
        return true;
    }
};