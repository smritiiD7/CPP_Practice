class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        string rev="",ans;
        while(i<s.length())
        {
            int j=i;
            rev="";
            while(s[j]!=' '&&j<s.length())
            {
                rev+=s[j];
                j++;
            }
            reverse(rev.begin(),rev.end());
            ans+=rev;
            if(j!=s.length())
            ans+= ' ';
            i=j+1;
        }
        return ans;
    }
};