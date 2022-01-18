class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int size = fb.size();
        int i=0;
        while(i<size)
        {
    if(fb[i] ==0 && (i==0 || fb[i-1]==0) && (i==size-1 || fb[i+1]==0))
    {
        n--;
        fb[i]=1;
       
    }
             i++;
        }
        return n<=0;
    }
};