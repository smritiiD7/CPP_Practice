class Solution {
public:
    int numSub(string s) {
        int i;
        long long  ans=0,n;
        for(i=0;i<s.length();i++)
        {
            n=0;
            while(s[i]=='1')
            {
                n++;
                i++;
            }
                ans+=n*(n+1)/2;
        }
        return ans%1000000007;
        
        
    }
};