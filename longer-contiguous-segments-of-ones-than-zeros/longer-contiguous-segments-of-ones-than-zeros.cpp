class Solution {
public:
    bool checkZeroOnes(string s) {
         int zero=0,one=0,i;
        int maxiZero=0,maxiOne=1;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                one++;
                zero=0;
            }
            else
            {
                zero++;
                one=0;
            }
            maxiOne=max(maxiOne,one);
            maxiZero=max(maxiZero,zero);
        }
        return  maxiZero<maxiOne;
        
        
    }
};