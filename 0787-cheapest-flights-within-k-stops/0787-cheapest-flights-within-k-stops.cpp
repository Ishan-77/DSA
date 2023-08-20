class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        
        // create graph from flight array
        
        vector<pair<int,int>>adj[n];
        
        for(auto it:flights) {
            adj[it[0]].push_back({it[1],it[2]});
        }
        // graph created 
        
        queue<vector<int>>q;  // [stop,node,cost]
        
        vector<int>price(n,1e9);
        price[src] = 0;
        
        q.push({0,src,0});
        
        while(!q.empty()) {
            auto top = q.front();
            int stop = top[0];
            int node = top[1];
            int cost =  top[2];
            q.pop();
            
            if(stop > k) break;
            
            for(auto nbr : adj[node]) {
                int adjnode = nbr.first;
                int edgewt = nbr.second;
                
                int newcost  = cost + edgewt;
                    
                if(newcost < price[adjnode] && stop<=k) {
                    price[adjnode] = newcost;
                    q.push({stop+1,adjnode,newcost});
                }
            }
            
        }
        if(price[dst] == 1e9) return -1;
        else return price[dst];
        
    }
};