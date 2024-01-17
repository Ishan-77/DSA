class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        
        unordered_map<int,int>mpp;
        
        int center;
        
        for(auto edge:edges) {
            mpp[edge[0]]++;
            mpp[edge[1]]++;
        }
        for(auto it:mpp){
            if(it.second==edges.size()) {
                center = it.first;
                break;
            }
        }
        return center;
        
    }
};