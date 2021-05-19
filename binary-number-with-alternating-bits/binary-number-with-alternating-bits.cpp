class Solution {
public:
    bool hasAlternatingBits(int n) {
        int b[33],size,i;
        while(n>0)
        {
        b[i] = n % 2;
        n = n / 2;
        i++;
        size=i;
        }
        
    for(i=1;i<size;i++)
    {
        if(b[i-1]==b[i])
            return false;
    }
        return true;
    }
};