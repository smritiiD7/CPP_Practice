class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,pro=1;
        while(n)
        {
            int k=n%10;
            pro=pro*k;
            sum+=k;
            n=n/10;
        }
        int ans=pro-sum;
        return ans;
        
    }
};