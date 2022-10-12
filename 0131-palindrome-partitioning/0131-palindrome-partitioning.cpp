class Solution {
public:
    
    
    bool isPalindrome(string s)
    {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            if(s[left++]!=s[right--]) return false;
        }
        return true;
    }
    
    
    
    void helper(string s,vector<vector<string>>&result,vector<string>&temp)
    {
        if(s.size()==0)
        {
            result.push_back(temp);
            
        }
        for(int i=0;i<s.size();i++)
        {
            string leftpar = s.substr(0,i+1);
            if(isPalindrome(leftpar))
            {
                temp.push_back(leftpar);
                helper(s.substr(i+1),result,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>result;
        vector<string>temp;
        helper(s,result,temp);
        return result;
    }
};