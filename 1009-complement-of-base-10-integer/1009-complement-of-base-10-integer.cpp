class Solution {
public:
    int bitwiseComplement(int num) {
         if(num==0) return 1;
          vector<int> v;
        int ans=0;
        while(num!=0)
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
        int k =n;
        for(int i = n ;i>=0;i--)
        {
          ans = ans+ v[i]*pow(2,k);
            k--;
        }
        return ans;
    }
};