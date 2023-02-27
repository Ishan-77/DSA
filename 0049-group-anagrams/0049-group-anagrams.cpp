class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        
        unordered_map<string,vector<string>> mpp;
       
        for(string s : strs)
        {
            string temp = s;
            sort(s.begin(),s.end());
            mpp[s].push_back(temp);
        }
        for(auto el : mpp)
        {
            ans.push_back(el.second);
        }
        return ans;
    }
};