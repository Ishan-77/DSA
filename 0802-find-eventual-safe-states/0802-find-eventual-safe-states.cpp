class Solution {
public:
    
    bool dfscheck(int node,vector<int>adj[],int vis[],int pathvis[],int check[]) {
        vis[node] = 1;
        pathvis[node] = 1;
        for(auto it:adj[node]) {
            if(!vis[it]) {
                if(dfscheck(it,adj,vis,pathvis,check)==true) return true;
            }
            else if(pathvis[it]) return true;
        }
        check[node]= 1;
        pathvis[node] = 0;
        return false;
        
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int v = graph.size();
        vector<int>adj[v];
        for(int i=0;i<v;i++) { // adj list created
            adj[i] = graph[i];
        }
        int vis[v];
        int pathvis[v];
        int check[v];
        
        for(int i=0;i<v;i++) {
            vis[i] =0;
            pathvis[i] =0;
            check[i] = 0;
        }
        
        for(int i=0;i<v;i++) {
            if(!vis[i]) {
                dfscheck(i,adj,vis,pathvis,check);
            }
        }
        vector<int>ans;
        for(int i=0;i<v;i++) {
            if(check[i]==1) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};