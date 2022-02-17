class Solution {
public:
    int integerReplacement(int k) {
        long long n=k;
        int cnt=0;
        while(n>1)
        {
            if(n%2==0)
            {
                n=n/2;
                cnt++;
            }
            else
            {
                if(n==3 || n==5)
                    n=n-1;
                
                else{
                if(((n-1)/2)%2==0)
                    n=n-1;
                    else
                        n=n+1;
                
                }
                cnt++;;
            }
        }
        return cnt;
    }
};