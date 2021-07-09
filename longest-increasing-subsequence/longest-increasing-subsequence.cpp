class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 1;
        int dp[n];
        dp[0]=1;
        int i,maxo=0;
        for(i=1;i<n;i++)
        {
            int max=0;
            for(int j=0;j<i;j++)
            {
                if(nums[i]>nums[j])
                {
                    if(dp[j]>max)
                    {
                        max=dp[j];
                    }
                }
            }
            dp[i]=max+1;
            if(dp[i]>maxo)
            {
                maxo=dp[i];
            }
        }
        return maxo;
    }
};