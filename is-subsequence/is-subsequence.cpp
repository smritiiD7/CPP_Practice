class Solution {
public:
    int lcs(string a,string b)
{
    int m=a.length(),n=b.length();
    int dp[m+1][n+1],i,j;
    for(i=0;i<=m;i++)
    {
        dp[i][0]=0;
    }
    for(j=0;j<=n;j++)
    {
        dp[0][j]=0;
    }
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return dp[m][n];
}
    bool isSubsequence(string s, string t) {
        int x=lcs(s,t);
        if(x==s.length())
            return true;
        return false;
        
    }
};