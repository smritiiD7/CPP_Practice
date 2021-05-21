class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
        if(n<=0)
            return false;
        while(n)
        {
            n&=n-1;
            cnt++;
            
        }
        if(cnt==1)
            return true;
        return false;
        
    }
};