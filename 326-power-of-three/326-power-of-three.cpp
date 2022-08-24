class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
      int limit = 1162261467;
        return limit%n==0;
    }
};