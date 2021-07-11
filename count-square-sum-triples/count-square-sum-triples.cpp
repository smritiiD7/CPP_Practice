class Solution {
public:
    int countTriples(int n) {
        int i,j,k,cnt=0;
        for(i=1;i<=n-2;i++)
        {
           for(j=i+1;j<=n-1;j++)
           {
               for(k=j+1;k<=n;k++)
               {
                   int left=i*i+j*j;
                   int right=k*k;
                   if(left==right)
                       cnt+=2;
               }
           }
        }
        return cnt;
    }
};