class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum1=0,sum2=0;
        int i;
        for(i=0;i<s.length();i++)
        {
            sum1=sum1+s[i];
        }
        for(i=0;i<t.length();i++)
        {
            sum2=sum2+t[i];
        }
        char ans=sum2-sum1;
        return ans;
    }
};