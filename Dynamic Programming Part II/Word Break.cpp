//Link: https://leetcode.com/problems/word-break/description/

class Solution {
public:
    bool check(string &s, vector<string>& wordDict) {
        for(auto it : wordDict) {
            if(it == s)
                return true;
        }
        return false;
    }

    bool solve(string &s, vector<string>& wordDict, int start, vector<int>& dp) {
        if(start >= s.length()) return true;
        if(dp[start]!=-1)   return dp[start];
        bool flag = false;
        string ans = "";
        for(int i=start; i<s.length(); i++) {
            ans += s[i];
            if(check(ans, wordDict))
                flag = flag || solve(s, wordDict, i+1, dp);
        }
        dp[start] = flag;
        return dp[start];
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        vector<int>dp(n+1, -1);
        return solve(s, wordDict, 0, dp);
    }
};
