class Solution {
public:
    int hammingDistance(int x, int y) {
        int ax[34]={0},ay[34]={0},i=0,j=0,cnt=0,k,l;
        while(x>0)
        {
           ax[i]=x%2;
            x=x/2;
            i++;
        }
        while(y>0)
        {
            ay[j]=y%2;
            y=y/2;
            j++;
        }
        for(k=0,l=0;k<34,l<34;k++,l++)
        {
            if(ax[k]!=ay[l])
            {
                cnt++;
            }
        }
        return cnt;
        
    }
};