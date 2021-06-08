class Solution {
public:
    bool checkZeroOnes(string s) {
        int i,maxiOne=0,maxiZero=0,ones=0,zeroes=0;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                ones++;
                zeroes=0;
            }
            else
            {
                zeroes++;
                ones=0;
            }
            maxiOne=max(ones,maxiOne);
            maxiZero=max(zeroes,maxiZero);
        }
        return maxiOne>maxiZero;
        
        
        
    }
};