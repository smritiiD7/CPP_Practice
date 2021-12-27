class Solution {
public:
    int findComplement(int num) {
        vector<int> v;
        int ans=0,k=0;
        while(num>0)
        {
            v.push_back(num%2);
            num/=2;
        }
        
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==0) v[i]=1;
        else v[i]=0;
    }
        int n = v.size()-1;
        for(int i = n ;i>=0;i--)
        {
           ans=ans * 2 + v[i];
        }
        return ans;
    }
};