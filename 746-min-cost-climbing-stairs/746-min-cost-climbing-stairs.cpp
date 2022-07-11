class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.begin(),cost.end());
        dp[0] = cost[0];
        dp[1] = cost[1];
        int n=cost.size();
        for(int i=2;i<cost.size();i++)
        {
            dp[i] = min(dp[i-1],dp[i-2])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
    }
};