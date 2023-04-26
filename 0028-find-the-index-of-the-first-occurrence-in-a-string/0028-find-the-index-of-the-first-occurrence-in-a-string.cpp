class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int h = haystack.size();
        int n  = needle.size();
       int i=0;
        int j=0;
        int start = 0;
        while(i<h && j<n)
        {
            if(haystack[i]==needle[j])
            {
                if(i-start+1 ==n) return start;
                i++;
                j++;
            }
            else
            {
                j=0;
                start++;
                i = start;
            }
        }
        return -1;
    }
};