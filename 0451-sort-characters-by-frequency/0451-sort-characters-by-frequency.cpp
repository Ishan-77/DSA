class Solution {
public:
    
    static bool comp(pair<char,int> a, pair<char,int> b)
    {
        return a.second>b.second;  
    }
    
    string frequencySort(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;
        }
        vector<pair<char,int>>v;
        for(auto &p:mpp)
        {
            v.push_back({p.first,p.second});
        }
        sort(v.begin(),v.end(),comp);
        
        string ans="";
        for(auto &it:v)
        {
            for(int i=0;i<it.second;i++)
            {
                ans+=it.first;
            }
        }
        return ans;
        
    }
};