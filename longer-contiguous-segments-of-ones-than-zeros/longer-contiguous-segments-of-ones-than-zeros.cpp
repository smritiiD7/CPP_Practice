class Solution {
public:
    bool checkZeroOnes(string s) {
        int i,maxiOne=0,maxiZero=0;
        for(i=0;i<s.length();i++)
        {
            int cnt1=0;
            while(s[i]=='1')
            {
                cnt1++;
                i++;
            }
            maxiOne=max(maxiOne,cnt1);
        }
        for(i=0;i<s.length();i++)
        {
            int cnt0=0;
            while(s[i]=='0')
            {
                cnt0++;
                i++;
            }
            maxiZero=max(maxiZero,cnt0);
        }
        if(maxiOne>maxiZero)
           return true;
        return false;
        
    }
};