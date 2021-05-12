class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int m1[128]={-1},m2[128]={-1};
        for(int i=0;i<s.length();i++)
        {
          m1[s[i]]=i;
            m2[t[i]]=i;
        }
        for(int i=0;i<s.length();i++)
        {
            if(m1[s[i]]!=m2[t[i]])
                return false;
        }
        return true;
        
    }
};