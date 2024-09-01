class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
        vector<vector<int>>final_ans(m,vector<int>(n,0));
        
        
        
        if(m*n!=original.size()) return {};
        
        int orig_index =  0;
        
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++){
                final_ans[i][j] = original[orig_index++];
            }
        }
        return final_ans;
        
    }
};