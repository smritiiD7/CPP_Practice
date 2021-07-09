class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
         int i,cnt=0,ans;
        vector<int> arr(n+1,0);
       
        for(i=0;i<trust.size();i++)
           arr[trust[i][0]]=1;
        for(i=1;i<=n;i++)
        {
            if(arr[i]==0)
                ans=i;
        }
        for(i=0;i<trust.size();i++)
        {
          if(trust[i][1]==ans)
              cnt++;
        }
        if(cnt==n-1)
            return ans;
        return -1;
    }
};