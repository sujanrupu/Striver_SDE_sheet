//Link: https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1

class Solution
{
    public:
    int solve(int maxWeight, int weight[], int value[], int i, vector<vector<int>>& dp) {
        if(i == 0) {
            if(weight[0] <= maxWeight)
                return value[0];
            else
                return 0;
        }
        int incl = 0;
        if(dp[i][maxWeight]!=-1)    return dp[i][maxWeight];
        if(weight[i] <= maxWeight)
            incl = value[i] + solve(maxWeight-weight[i], weight, value, i-1, dp);
        int excl = solve(maxWeight, weight, value, i-1, dp);
        dp[i][maxWeight] = max(incl, excl);
        return dp[i][maxWeight];
    }
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       vector<vector<int>>dp(n+1, vector<int>(W+1, -1));
       return solve(W, wt, val, n-1, dp);
    }
};
