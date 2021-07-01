class Solution {
public:
    int mySqrt(int x) {
        int left=0,right=x,mid;
        if(x==0)
            return 0;
        if(x==1)
            return 1;
        while(left<right)
        {
            int temp;
            mid=left+(right-left)/2;
            temp=x/mid;
            if(temp==mid)
                return mid;
            else if(temp>mid)
            {
                left=mid+1;
            }
            else
                right=mid;
        }
        return left-1;
    }
};