//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:


void dfs(int row,int col,vector<vector<int>>&ans,vector<vector<int>>&image,int dr[],int dc[],int newColor,int initial) {
    int n = image.size();
    int m  = image[0].size();
    ans[row][col] = newColor;
    // go to neighbors
    for(int i=0;i<4;i++) {
       int  nrow = row+dr[i];
        int ncol =  col+dc[i];
    
    if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && ans[nrow][ncol] ==initial && ans[nrow][ncol]!=newColor) {
        dfs(nrow,ncol,ans,image,dr,dc,newColor,initial);
    }
}
    
    
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here 
        vector<vector<int>>ans = image; // visited array 
        int initial  = image[sr][sc];
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        dfs(sr,sc,ans,image,dr,dc,newColor,initial);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends