class Solution {
public:
   /* int checkhomogenity(string s)
    {
        int i=0,j = s.length()-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
                return 0;
            i++;
            j--;
        }
        return 1;
    }
    
    int printSubStrings(string s)
    {
        int cnt=0;
        for(int i=0;i<s.length();i++)
        {
            for(int j=1;j<=s.length()-i;j++)
            {
                cnt+=checkhomogenity(s.substr(i,j));
            }
        }
        return cnt;
    }
    */
    int countHomogenous(string s) {
          long long  int                               j=s.length()-1,i=0;
          long long  int      ans=0;
       while(i<s.length())
       {
           long       long  int    cnt=1;
           while(s[i]==s[i+1])
           {
               cnt++;
               i++;
           }
          //ns+=( (  cnt*(cnt+1))   /2)%1000000007;
            ans+=((cnt*(cnt+1))/2)%1000000007;
           i++;
       }
        return ans%1000000007;
    }
};