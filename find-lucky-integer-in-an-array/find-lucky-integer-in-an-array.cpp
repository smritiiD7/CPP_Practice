class Solution {
public:
    int findLucky(vector<int>& arr) {
            int i,maxElement=0,maxLucky=-1,lucky,hash[501]={0};
           int  maxIn=*max_element(arr.begin(),arr.end());
            for(i=0;i<arr.size();i++)
            {
                    hash[arr[i]]++;
            }
            for(i=1;i<=maxIn;i++)
            {
                    int k=i;
                    if(k==hash[i])
                    {
                            
                        if(k>=maxLucky)
                        {
                                maxLucky=k;
                        }
                    }
             }
           
            return maxLucky;
          
    }
};