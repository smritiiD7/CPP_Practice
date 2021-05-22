class Solution {
public:
    bool checkPerfectNumber(int num) {
        int i,sum=0;
        for(i=1;i<=sqrt(num);i++)
        {
            if(num%i==0)
            {
                if(num/i==i)
                {
                    sum+=i;
                }
               else
                   sum+=num/i+i;
            }
        }
       return sum-num==num;
    }
};