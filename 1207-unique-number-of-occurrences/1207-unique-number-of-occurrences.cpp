class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        set<int>st;
        
        unordered_map<int,int>mpp;
        
        
        for(int i=0;i<arr.size();i++) {
            mpp[arr[i]]++;
        }
        for(auto it:mpp){
            st.insert(it.second);
        }
        
        if(st.size()==mpp.size()) return true;
        else return false;
        
    }
};