//Link: https://leetcode.com/problems/minimum-path-sum/description/

class Solution {
public:
    int solve(vector<vector<int>>& grid, int i, int j, vector<vector<int>>& dp) {
        if(i < 0 || j< 0)   return 1e9;
        if(i == 0 && j == 0)    return grid[i][j];
        if(dp[i][j]!=-1)    return dp[i][j];

        int right = grid[i][j] + solve(grid, i-1, j, dp);
        int bottom = grid[i][j] + solve(grid, i, j-1, dp);
        dp[i][j] = min(right, bottom);
        return dp[i][j];
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, -1));
        return solve(grid, n-1, m-1, dp);
    }
};
