class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char,int>m;
        int sum=0;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        for(int i=0;i<s.size();)
        {
            if(m[s[i]]>=m[s[i+1]])
            {
                sum+=m[s[i]];
                i++;
            }
            else
            {
                sum+=(m[s[i+1]]-m[s[i]]);
                i+=2;
            }
        }
        return sum;
        
    }
};