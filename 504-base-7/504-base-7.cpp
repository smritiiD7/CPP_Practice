class Solution {
public:
    string convertToBase7(int num1) {
        int sum=0,i=1;
        int num = abs(num1);
        while(num>0)
        {
            int rem = num%7;
            sum+=rem*i;
            i*=10;
            num/=7;
        }
       if(num1<0) return '-'+to_string(sum);
        return to_string(sum);
    }
};