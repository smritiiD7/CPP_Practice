class Solution {
public:
    int balancedStringSplit(string s) {
            int i,l=0,ans=0;
            for(i=0;i<s.length();i++)
            {
                    if(s[i]=='L')
                    {
                            l++;
                    }
                    if(s[i]=='R')
                    {
                            l--;
                    }
                    if(l==0)
                            ans++;
            }
            return ans;
        
    }
};