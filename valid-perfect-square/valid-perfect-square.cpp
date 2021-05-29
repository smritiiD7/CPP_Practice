class Solution {
public:
    bool isPerfectSquare(int num) {
        long long x=sqrt(num);
        if(x*x==num)
            return true;
        return false;
    }
};