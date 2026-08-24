class Solution {
public:
    int helper(int i, vector<int>& cost, vector<int>& dp) {
        if(i < 0) return 0;
        if(i == 0 || i == 1) return cost[i];

        if(dp[i] != -1) return dp[i];
        dp[i] = cost[i] + min(helper(i-1, cost, dp), helper(i-2, cost, dp));
        return dp[i];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1);
        return min(helper(n-1, cost, dp), helper(n-2, cost, dp));
    }
};
