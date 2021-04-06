class Solution {
public:
    int minOperations(int n) {
         vector<int> v;
            int i,target,sum=0,diff,sum1=0;
            for(i=0;i<n;i++)
            {
                    int k=2*i+1;
                    v.push_back(k);
                    sum+=v[i];
            }
            target=sum/n;
            for(i=0;i<n;i++)
            {
                    if(v[i]!=target)
                    {
                            diff=abs(v[i]-target);
                            {
                                    sum1+=diff;
                            }
                    }
            }
            int ans=sum1/2;
            return ans;
    }
};