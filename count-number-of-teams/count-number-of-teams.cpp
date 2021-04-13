class Solution {
public:
    int numTeams(vector<int>& rating) {
            int n=rating.size();
            int k=count(rating);
            reverse(rating.begin(),rating.end());
            k+=count(rating);
            return k;
    } 
    int count(vector<int>&rating)
    {
            int n=rating.size(),c=0;
            vector<int> greater(n);
            vector<int> smaller(n);
            int i,j;
            for(i=0;i<n;i++)
            {
                    int target=rating[i];
                    c=0;
                    for( j=i+1;j<n;j++)
                    {
                            if(rating[j]>target)
                            {
                                    c++;
                            }
                    }
                    greater[i]=c;
            }
            for(i=0;i<n;i++)
            {
                    int target=rating[i];
                    c=0;
                    for(j=i-1;j>=0;j--)
                        {
                            if(rating[j]<target)
                            {
                                  c++;  
                            }
                                
                        }
                    smaller[i]=c;
            }
    
            int sum=0;
            for(i=0;i<n;i++)
            {
                    sum+=(greater[i]*smaller[i]);
            }
            return sum;
            }
        
    
};