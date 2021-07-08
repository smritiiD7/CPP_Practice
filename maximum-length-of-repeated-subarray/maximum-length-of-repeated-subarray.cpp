class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> dp(nums1.size()+1,vector<int>(nums2.size()+1,0));
        int maxi=0;
        for(int i=1;i<=nums1.size();i++)
        {
            for(int j=1;j<=nums2.size();j++)
            {
                int n1=nums1[i-1];
                int n2=nums2[j-1];
                if(n1==n2)
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                    maxi=max(maxi,dp[i][j]);
                }
            }
        }
        return maxi;
    }
};