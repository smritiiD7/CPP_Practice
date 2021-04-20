class Solution {
public:
    string modifyString(string s) {
            int i;
            for(i=0;i<s.length();i++)
            {
                    if(s[i]=='?')
                    {
                            s[i]='a';
                    }
                    while(i<s.length()&&s[i]==s[i+1]||i>0&&s[i]==s[i-1])
                    {
                            ++s[i];
                    }
            }
            return s;
            
        
    }
};