//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	bool isPossible(int N,int P, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    // creating graph 
	    vector<int>adj[N]; // adj list
	    for(auto prequisite : prerequisites) {
	        adj[prequisite.second].push_back(prequisite.first);
	    }
	     // graph ready adj list
	     
	     // performing topo sort
	     int indegree[N] = {0};
	     
	    for(int i=0;i<N;i++) {
	        for(auto it:adj[i]) {
	            indegree[it]++;
	        }
	    }
	    queue<int>q;
	    vector<int>topo;
	    for(int i=0;i<N;i++) {
	        if(indegree[i]==0) {
	            q.push(i);
	        }
	    }
	    while(!q.empty()) {
	        int t =  q.front();
	        q.pop();
	        topo.push_back(t);
	        
	        for(auto it:adj[t]){
	            indegree[it]--;
	            if(indegree[it]==0) {
	                q.push(it);
	            }
	        }
	    }
	    if(topo.size()==N) return true;
	    else return false;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
    	int N, P;
        vector<pair<int, int> > prerequisites;
        cin >> N;
        cin >> P;
        for (int i = 0; i < P; ++i) {
            int x, y;
            cin >> x >> y;
            prerequisites.push_back(make_pair(x, y));
        }
        // string s;
        // cin>>s;
        Solution ob;
        if (ob.isPossible(N,P, prerequisites))
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
	}
	return 0;
}
// } Driver Code Ends