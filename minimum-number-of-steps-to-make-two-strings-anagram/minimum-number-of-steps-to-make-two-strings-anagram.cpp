class Solution {
public:
    int minSteps(string s, string t) {
            int hash1[26]={};
            int i,ans=0;
            for(i=0;i<s.length();i++)
            {
                    hash1[s[i]-'a']++;
                    hash1[t[i]-'a']--;
            }
           for(i=0;i<26;i++)
           {
                   if(hash1[i]>0)
                   {
                          ans= ans+hash1[i];
                   }
           }
            return ans;
        
    }
};