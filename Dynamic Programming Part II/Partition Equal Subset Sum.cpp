//Link: https://leetcode.com/problems/partition-equal-subset-sum/description/

class Solution {
public:
    bool solve(vector<int>& nums, int sum, int target, int index, vector<vector<int>>& dp) {
        if(sum > target || index >= nums.size())    return false;
        if(sum == target)   return true;
        if(dp[index][sum]!=-1)  return dp[index][sum];
        int incl = solve(nums, sum + nums[index], target, index+1, dp);
        int excl = solve(nums, sum, target, index+1, dp);
        dp[index][sum] = (incl || excl);
        return dp[index][sum];
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for(int i=0; i<n; i++)
            sum += nums[i];
        if(sum & 1) return false;
        int target = sum / 2, i = 0;
        sum = 0;
        vector<vector<int>>dp(n+1, vector<int>(target+1, -1));
        return solve(nums, sum, target, i, dp);
    }
};
