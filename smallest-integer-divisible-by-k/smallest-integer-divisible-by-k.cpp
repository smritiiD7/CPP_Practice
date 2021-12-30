class Solution {
public:
    int smallestRepunitDivByK(int K) {
        if (K%2==0 || K%5==0)
            return -1;
        int c=1,m=1;
        while(1)
        {
            if(m%K==0)
                return c;
            c+=1;
            m=(m*10+1)%K;
        }
        return -1;
    }
};