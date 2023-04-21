class Solution {
public:
    
    static bool comp(pair<char,int> a,pair<char,int> b)
    {
        return a.second>b.second;
    }
     
    string frequencySort(string s) {
      map<char,int> mp;
        
        for(int i=0;i<s.length();i++)
            mp[s[i]]++;
        //map is ready
        
        //map to vector of pairs
        vector<pair<char,int>> v(mp.begin(),mp.end());
        //vector is ready
        
        sort(v.begin(),v.end(),comp);
        
        string res="";
        for(auto it:v)
        {
            for(int i=0;i<it.second;i++)
                res+=it.first;
        }
        
        return res;
    }
};