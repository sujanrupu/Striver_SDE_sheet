//Link: https://www.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1

class Solution
{
    public:
    int solve(int n, int k, vector<vector<int>>& dp) {
        if(n == 1 || k <= 1)
            return k;
        if(dp[n][k]!=-1)    return dp[n][k];
        int ans = INT_MAX;
        for(int i=1; i<=k; i++) {
            int broken = solve(n-1, i-1, dp);
            int not_broken = solve(n, k-i, dp);
            int total = 1 + max(broken, not_broken);
            ans = min(ans, total);
        }
        return dp[n][k] = ans;
    }
    int eggDrop(int n, int k) 
    {
        vector<vector<int>>dp(n+1, vector<int>(k+1, -1));
        return solve(n, k, dp);
    }
};
