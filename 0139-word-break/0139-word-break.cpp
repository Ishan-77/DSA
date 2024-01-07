class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> st;
        int n = s.size();

        vector<int> dp(n + 1, false);
        dp[0] = true; // Empty string is considered breakable

        for (const string& word : wordDict) {
            st.insert(word);
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < i; j++) {
                if (dp[j] && st.find(s.substr(j, i - j)) != st.end()) {
                    dp[i] = true; // Update dp[i] if substring [j, i) is in the dictionary
                    break;
                }
            }
        }

        return dp[n]; // Return the result for the entire string
    }
};