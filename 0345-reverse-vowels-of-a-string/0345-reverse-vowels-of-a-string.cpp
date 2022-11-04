class Solution {
public:
    string reverseVowels(string s) {
        int dic[256]={0};
        
        dic['a']=1;
          dic['e']=1;
          dic['i']=1;
          dic['o']=1;
          dic['u']=1;
          dic['A']=1;
          dic['E']=1;
        dic['I']=1;
        dic['O']=1;
        dic['U']=1;
        int start =0;
        int end =  s.size()-1;
        while(start<end)
        {
            while(start<end &&  dic[s[start]]==0) start++;
            while(start < end  && dic[s[end]]==0 ) end --;
            
            swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
        
        
    }
};