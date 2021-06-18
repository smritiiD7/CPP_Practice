class Solution {
public:
    int arrangeCoins(int n) {
        int i=1,ans=0;
        while(n>=0)
        {
            n=n-i;
            i++;
            ans++;
        }
        return ans-1;
    }
};