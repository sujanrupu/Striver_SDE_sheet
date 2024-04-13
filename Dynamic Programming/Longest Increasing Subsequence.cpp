//Link: https://leetcode.com/problems/longest-increasing-subsequence/description/

class Solution {
public:
    int solve(vector<int>& nums, int curr, int prev, vector<vector<int>>& dp) {
        if(curr >= nums.size()) return 0;
        if(dp[curr][prev+1]!=-1)    return dp[curr][prev+1];
        int incl = 0;
        if(prev == -1 || nums[curr] > nums[prev])
            incl = 1 + solve(nums, curr+1, curr, dp);
        int excl = 0 +solve(nums, curr+1, prev, dp);
        dp[curr][prev+1] = max(incl, excl);
        return dp[curr][prev+1];
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return solve(nums, 0, -1, dp);
    }
};
