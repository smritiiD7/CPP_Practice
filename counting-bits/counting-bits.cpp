class Solution {
public:
    vector<int> countBits(int n) {
        int i,cnt=0;
        vector<int> v(n+1,0);
       // v.push_back(0);
        for(i=1;i<=n;i++)
        {
          v[i]=v[i&(i-1)]+1;
        }
        return v;
        
    }
};