class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>mpp;
        int num=0;
        mpp.insert({'I',1});
        mpp.insert({'V',5});
        mpp.insert({'X',10});
        mpp.insert({'L',50});
        mpp.insert({'C',100});
        mpp.insert({'D',500});
        mpp.insert({'M',1000});
        
        for(int i=0;i<s.size();)
        {
            if(mpp[s[i]]>=mpp[s[i+1]])
            {
               num+=mpp[s[i]];
                i++;
                
            }
            else
            {
                num+=(mpp[s[i+1]]-mpp[s[i]]);
                i+=2;
            }
        }
        return num;
        
    }
};