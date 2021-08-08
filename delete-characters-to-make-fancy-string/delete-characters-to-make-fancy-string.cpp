class Solution {
public:
    string makeFancyString(string s) {
        int i,curr=1;
        string ans="";
         ans+=s[0];
        for(i=1;i<s.length();i++)
        {
            if(s[i]==s[i-1])
                curr++;
            else
                curr=1;
            if(curr<3)
                ans+=s[i];
        }
        return ans;
    }
};