class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int sizes = s.size();
        int sizeg =  goal.size();
        if(sizes!=sizeg) return false;
         
       unordered_set<char>st;
        for(int i=0;i<s.size();i++)
        {
            st.insert(s[i]); // no duplicates as set
            
            
        }
        if(s==goal)
          if(goal.size()>st.size()) return true;
           else return false;
        
        
        int i=0;
        int j = s.size()-1;
        while(i<j && s[i] == goal[i])i++;
        while(i<j && s[j] == goal[j])j--;
        
        swap(s[i],s[j]);
        
        return s==goal;
        
        
        
        
        
        
    }
};