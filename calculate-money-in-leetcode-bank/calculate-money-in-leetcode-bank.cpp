class Solution {
public:
    int totalMoney(int n) {
        int initialAmount=1,day=1,r=1,collected=0;
        while(n>0)
        {
          collected+=initialAmount;
            initialAmount++;
            day++;
            if(day==8)
            {
                ++r;
                initialAmount=r;
                day=1;
            }
            n--;
        }
        return collected;
    }
};