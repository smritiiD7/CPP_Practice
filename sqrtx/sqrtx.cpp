class Solution {
public:
    int mySqrt(int x) {
       long long cntSum=0,sum=-1,cnt=0;
        while(cntSum<=x)
        {
            sum+=2;
            cntSum+=sum;
            cnt++;
            if(cntSum==x)
            {
                return cnt;
            }
        }
        return cnt-1;
    }
};