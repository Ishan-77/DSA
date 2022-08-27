class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        if(letters.back()<=target)
        {
            return letters.front();
        }
        int l=0;
        int h=letters.size()-1;
        
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            if(letters[mid]<=target)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
        return letters[l];
    }
};