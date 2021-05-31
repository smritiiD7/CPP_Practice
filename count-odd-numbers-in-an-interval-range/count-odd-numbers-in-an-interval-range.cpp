class Solution {
public:
    int countOdds(int low, int high) {
        int i,cnt=0,ans;
       cnt=(high-low)/2;
        if(low%2==1||high%2==1)
        return cnt+1;
        return cnt;
    }
};