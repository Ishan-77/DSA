class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mpp;
        for(char &c:s)
        {
            mpp[c]++;
        }
        for(char&a: t)
        {
            mpp[a]--;
            if(mpp[a]<0) return a;
        }
        return '\0';
    }
};