//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int CheapestFLight(int n, vector<vector<int>>& flights, int src, int dst, int K)  {
        // Code here
        
                    
                    
       vector<pair<int,int>>adj[n];
       
       for(auto it:flights) {
           adj[it[0]].push_back({it[1],it[2]});
       }
       // graph is ready 
       
       queue<vector<int>>q;
       vector<int>prices(n,1e9);
       prices[src] = 0;
       
       q.push({0,src,0});        // [stop,source, price];
       
       while(!q.empty()) {
           auto it = q.front();
           int stop = it[0];
           int source = it[1];
           int price = it[2];
           q.pop();
           
           if(stop > K) break;
           
           for(auto nbr : adj[source]) {
               int adjnode = nbr.first;
               int edgewt = nbr.second;
               
               int newprice =  price +  edgewt;
               
               if(newprice < prices[adjnode] && stop<=K) {
                   prices[adjnode]  =  newprice;
                   q.push({stop+1,adjnode,newprice});
               }
           }
       }
       if(prices[dst] == 1e9) return -1;
       return prices[dst];
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n; cin>>n;
        int edge; cin>>edge;
        vector<vector<int>> flights;
        
        for(int i=0; i<edge; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            flights.push_back(temp);
        }
        
        int src,dst,k;
        cin>>src>>dst>>k;
        Solution obj;
        cout<<obj.CheapestFLight(n,flights,src,dst,k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends