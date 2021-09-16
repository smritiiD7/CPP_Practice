class Solution {
public:
    int addDigits(int num) {
        long long  k,div;
        int sum=0;
        while(num>9)
        {
            div=num;
            sum=0;
            while(div!=0)
            {
                k=div%10;
                sum+=k;
                div=div/10;
            }
            num=sum;
        }
        return num;
    }
};