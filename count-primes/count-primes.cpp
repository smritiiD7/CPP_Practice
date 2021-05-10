class Solution {
public:
    int countPrimes(int n) {
        if(n==0||n==1)
            return 0;
        int cnt=0,i,j;
         vector<int> prime(n,1);
        prime[0]=0;
        prime[1]=0;
        for(i=2;i<n;i++)
        {
            if(prime[i]==1)
            {
                for(j=2;i*j<n;j++)
                {
                    prime[j*i]=0;
                }
            }
        }
        for(i=2;i<n;i++)
        {
            if(prime[i]==1)
            {
                cnt++;
            }
        }
        return cnt;
        
    }
};