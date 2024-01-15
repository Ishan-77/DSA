class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        
    vector<vector<int>>ans;
        
        vector<int>noloss;
        vector<int>oneloss;
        
        
        map<int,int>mpp;
        
        map<int,int>mpp2;
        
        
        for(auto match:matches) {
            mpp[match[0]]++;
            mpp2[match[1]]++;
        }
        
       for(auto it:mpp) {
           if(mpp2.find(it.first)==mpp2.end()) {
               
               noloss.push_back(it.first);
               
           }
       }
        
        for(auto it2:mpp2) {
            if(it2.second==1){
                oneloss.push_back(it2.first);
            }
        }
        
        ans.push_back(noloss);
        ans.push_back(oneloss);
        
        
        
        
        
        
        
        
        return ans;
        
    }
};