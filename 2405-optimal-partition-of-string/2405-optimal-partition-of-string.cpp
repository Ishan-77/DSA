class Solution {
public:
    int partitionString(string s) {
        unordered_set<char>st;
        int count=1;
        for(char c:s)
        {
            if(st.count(c))
            {
                count++;
                st.clear();
            }
            st.insert(c);
        }
        return count;
    }
};