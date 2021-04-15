class Solution {
public:
    int maxPower(string s) {
            int i,cnt=1,maxi=1,ans;
            for(i=1;i<s.length();i++)
            {
                    if(s[i-1]==s[i])
                    {
                           maxi=max(maxi,++cnt);
                    }
                    else{
                            cnt=1;
                        }
            }
            return maxi;
        
    }
};