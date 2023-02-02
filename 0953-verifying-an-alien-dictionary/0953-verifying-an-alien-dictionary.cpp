class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mpp;
        for(int i =0;i<order.size();i++)
        {
            mpp[order[i]]= i;
        }
        for(int i=0;i<words.size()-1;i++)
        {
            for(int j=0;j<words[0].size();j++)
            {
                if(j>=words[i+1].size()) return false;
                
                if(words[i][j]!=words[i+1][j])
                {
                    if(mpp[words[i][j]]>mpp[words[i+1][j]]) return false;
                    else
                         break;
                }
            }
            
        }
        return true;
    }
};