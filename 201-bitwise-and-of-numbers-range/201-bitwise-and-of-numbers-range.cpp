class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == right) return right;
        long long ans=left;
        for(long long  i=left+1;i<=right;i++)
        {
            ans&= i;
            if(ans==0) break;
        }
        return ans;
    }
};