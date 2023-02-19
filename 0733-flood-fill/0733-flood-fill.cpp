class Solution {
public:
    
    
    
    
    void dfs(int i,int j,int initialcolor,int newcolor, vector<vector<int>>&image) {
        int n  = image.size();
        int  m = image[0].size();
        if(i<0||j<0) return;
        if(i>=n||j>=m) return;
        if(image[i][j]!=initialcolor) return;
        
        image[i][j] = newcolor;
        
        dfs(i-1,j,initialcolor,newcolor,image); 
        dfs(i+1,j,initialcolor,newcolor,image);
        dfs(i,j-1,initialcolor,newcolor,image);
        dfs(i,j+1,initialcolor,newcolor,image);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int initial = image[sr][sc];
         if(initial!=color) {
             dfs(sr,sc,initial,color,image);
         }
        return image;
    }
};