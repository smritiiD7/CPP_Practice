class Solution {
public:
    bool isAnagram(string s, string t) {
        int hashs[26]={0},hasht[26]={0},i;
        if(s.length()!=t.length())
            return false;
        for(i=0;i<s.length();i++)
        {
            hashs[s[i]-'a']++;
            hasht[t[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(hashs[i]!=hasht[i])
                return false;
        }
        return true;
        
        
    }
};