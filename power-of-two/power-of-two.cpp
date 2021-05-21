class Solution {
public:
    bool isPowerOfTwo(int n) {
        int cnt=0;
        if(n<=0)
            return false;
            n&=n-1;
        if(n==0)
            return true;
        return false;
        
    }
};