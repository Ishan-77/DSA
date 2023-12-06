class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count[256] = {0}; // Updated to accommodate all ASCII characters
        int i = 0;
        int ans = 0;

        for (int j = 0; j < s.size(); j++) {
            count[s[j]]++;

            while (count[s[j]] > 1) {
                count[s[i]]--;
                i++;
            }

            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};
