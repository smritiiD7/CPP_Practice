class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length(),n=word2.length();
        int dp[m+1][n+1];
        int i,j;
        for(i=0;i<=m;i++)
        {
            dp[i][0]=0;
        }
        for(i=0;i<=n;i++)
        {
            dp[0][i]=0;
        }
        for(i=1;i<=m;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(word1[i-1]==word2[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return m-dp[m][n]+n-dp[m][n];
        
    }
};