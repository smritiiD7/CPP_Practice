class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int i;
        int res=0;
        for(i=0;i<32;i++)
        {
          res<<=1;
            if((n&1)==1)
            {
                res++;
            }
            n>>=1;
        }
            return res;
            
        
    }
};