class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       vector<char> a,b;
        int i,j;
        for(i=0,j=0;i<s1.length(),j<s2.length();i++,j++)
        {
            if(s1[i]!=s2[j]){
            a.push_back(s1[i]);
            b.push_back(s2[j]);
            }
        }
        if(a.size()==b.size()&&b.size()==0)
            return true;
        if(a.size()==2&&b.size()==2&&a[0]==b[1]&&a[1]==b[0])
            return true;
        else
        return false;
    }
};