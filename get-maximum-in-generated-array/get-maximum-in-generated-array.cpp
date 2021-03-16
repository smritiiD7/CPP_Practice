class Solution {
public:
    int getMaximumGenerated(int n) {
            int arr[n+1];
            int i,maxi=0;
            for(i=0;i<n+1;i++)
            {
                    if(i==0)
                            arr[i]=0;
                    if(i==1)
                            arr[i]=1;
                   if(2<=2*i and 2*i<=n)
                   {
                           arr[2*i]=arr[i];
                   }
                    if(2<=2*i+1 &&2*i+1<=n)
                    {
                            arr[2*i+1]=arr[i]+arr[i+1];
                    }
            }
            for(i=0;i<n+1;i++)
            {
                    if(arr[i]>=maxi)
                    {
                            maxi=arr[i];
                    }
            }
           
            return maxi;
        
    }
};