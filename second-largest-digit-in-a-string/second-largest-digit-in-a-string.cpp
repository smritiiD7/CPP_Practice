class Solution {
public:
    int secondHighest(string s) {
        int i,max1=-1,max2=-1;
        for(char i: s)
        {
            if(isdigit(i))
            {
                int k=i-'0';
                if(k>=max1)
                {
                    max1=k;
                }
            }
        }
        for(char i: s)
        {
            if(isdigit(i))
            {
                int k=i-'0';
                if(k<max1&&k>=max2)
                {
                    max2=k;
                }
            }
        }
        return max2;
    }
};