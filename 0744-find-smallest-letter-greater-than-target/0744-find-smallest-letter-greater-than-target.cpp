class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans;
        int cnt=0;
        for(int i=0;i<letters.size();i++)
        {
            if(letters[i] >  target)
            {
                cnt++;
                ans = letters[i];
                break;
            }
        }
      if(cnt > 0) return ans;
      else  return letters[0];
      
    }
};