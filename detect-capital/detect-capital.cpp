class Solution {
public:
    bool detectCapitalUse(string s) {
        int i,lowerletter=0,upperletter=0,l=s.length();
        for(i=0;i<s.length();i++)
        {
            if(s[i]>=97&&s[i]<=122){
                lowerletter++;
            }
            if(s[i]>=65&&s[i]<=90)
            {
                upperletter++;
            }
        }
        if(lowerletter==l||upperletter==l)
        {
            return true;
        }
        if(s[0]>=65&&s[0]<=90&&lowerletter==l-1)
            return true;
        return false;
        
    }
};