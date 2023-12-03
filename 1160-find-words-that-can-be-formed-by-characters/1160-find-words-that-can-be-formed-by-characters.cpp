class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        
        int ans = 0;
        unordered_map<char,int>mpp,mpp2;
        for(int i=0;i<chars.size();i++) {
            mpp[chars[i]]++;
        }
        for(int i=0;i<words.size();i++) {
            bool valid = true;
            mpp2 = mpp;
            for(int j=0;j<words[i].size();j++) {
                mpp2[words[i][j]]--;
                
                if(mpp2[words[i][j]] < 0) {
                    valid = false;
                    break;
                }
                
                
            }
            if(valid) ans+=words[i].size();
            
        }
        return ans;
        
    }
};