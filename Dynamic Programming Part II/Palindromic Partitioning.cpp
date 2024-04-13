//Link: https://www.geeksforgeeks.org/problems/palindromic-patitioning4845/1

class Solution{
public:
    bool isPal(string &s, int start, int end) {
        while(start < end) {
            if(s[start]!=s[end])
                return false;
            start++;    end--;
        }
        return true;
    }

    int solve(string &s, int i, vector<int>& dp) {
        if(i >= s.length()) return 0;
        if(dp[i]!=-1)   return dp[i];
        int mini = INT_MAX;
        for(int j=i; j<s.length(); j++) {
            if(isPal(s, i, j)) {
                int ans = 1 + solve(s, j+1, dp);
                mini = min(mini, ans);
            }
        }
        dp[i] = mini;
        return dp[i];
    }

    int palindromicPartition(string str)
    {
        int n = str.length();
        vector<int>dp(n+1, -1);
        return solve(str, 0, dp) - 1;
    }
};
