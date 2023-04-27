class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> final_ans;
        
        unordered_map<string,vector<string>>mpp;
        for(auto s:strs)
        {
            string t = s;
            sort(s.begin(),s.end());
            mpp[s].push_back(t);
            
        }
        for(auto el:mpp)
        {
            final_ans.push_back(el.second);
        }
        return final_ans;
        
        
            
        
        
        
    }
};