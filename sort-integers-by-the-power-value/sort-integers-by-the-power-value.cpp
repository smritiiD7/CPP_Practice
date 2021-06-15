class Solution {
public:
    int getKth(int lo, int hi, int k) {
        int i,cnt=0,count=0,ans;
        multimap<int,int> mp;
        for(i=lo;i<=hi;i++)
        {
            int num=i;
            cnt=0;
            while(num!=1)
            {
                if(num%2==0)
                {
                    num=num/2; 
                }
                else
                {
                    num=(3*num)+1;
                }
                cnt++;
            }
            mp.insert({cnt,i});
        }
        for(auto pair:mp)
        {
            ++count;
            if(count==k)
            {
              return pair.second;
            }
        }
        return 0;
        
        
    }
};