class Solution {
public:
    
     static bool comp(vector<int>&a,vector<int>&b) {
        return a[1] < b[1];
    } 
    
    int findLongestChain(vector<vector<int>>& pairs) {
        int count = 1;
        
        sort(pairs.begin(),pairs.end(),comp);
        
          int curr = pairs[0][1];
        for(int i=1;i<pairs.size();i++) {
           
           //int curr = pairs[0][1];
            
            if(pairs[i][0]  > curr) {
                 count++;
                curr = pairs[i][1];
                
            }
            
            
        }
        return count;
        
        
    }
  
    
};