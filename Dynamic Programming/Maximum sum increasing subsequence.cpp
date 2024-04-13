//Link: https://www.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

class Solution{
	public:
	int solve(int nums[], int n, int curr, int prev, vector<vector<int>>& dp) {
        if(curr >= n) return 0;
        if(dp[curr][prev+1]!=-1)    return dp[curr][prev+1];
        int incl = 0;
        if(prev == -1 || nums[curr] > nums[prev])
            incl = nums[curr] + solve(nums, n, curr+1, curr, dp);
        int excl = 0 +solve(nums, n, curr+1, prev, dp);
        dp[curr][prev+1] = max(incl, excl);
        return dp[curr][prev+1];
    }
	
	int maxSumIS(int arr[], int n)  
	{  
	    vector<vector<int>>dp(n+1, vector<int>(n+1, -1));
        return solve(arr, n, 0, -1, dp);
	}  
};
