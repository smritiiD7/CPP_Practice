class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
       vector<int> dp = cost;
        dp[0]=cost[0];
        dp[1]=cost[1];
        //int mini = INT_MAX;
        for(int i=2;i<n;i++)
        {
          dp[i] = min(dp[i-2],dp[i-1])+cost[i];
        }
        return min(dp[n-1],dp[n-2]);
    }
};