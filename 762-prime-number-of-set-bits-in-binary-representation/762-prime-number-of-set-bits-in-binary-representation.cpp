class Solution {
public:
    int countSetBits(int n)
    {
        int cnt=0;
        while(n)
        {
         n &= (n - 1);
         cnt++;
        }
        
        return cnt;
    }
    
    bool isPrime(int n){
    if (n == 0 || n == 1) 
    return false;
        int i;
    for (i = 2; i <= n/2; ++i) {
    if (n % i == 0) {
     return false;
    }
  }
   return true;

    }
    
    
    
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        for(int i=left;i<=right;i++)
        {
            int cnt = countSetBits(i);
            if(isPrime(cnt) ==true) ans++;
        }
        return ans;
    }
};