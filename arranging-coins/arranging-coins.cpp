class Solution {
public:
    int arrangeCoins(int n) {
        long long int i,rows=0,cnt=0;
        for(i=1;i<=n;i++)
        {
            rows+=i;
            if(rows<=n)
            {
                cnt++;
            }
            else if(rows>n)
                break;
        }
        return cnt;
        
    }
};