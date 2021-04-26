class Solution {
public:
    int firstUniqChar(string s) {
        int i,hash[27]={0},ans=-1;
        for(i=0;i<s.length();i++)
        {
            hash[s[i]-'a']++;
        }
        for(i=0;i<s.length();i++)
        {
            //int index=hash[s[i]-'a'];
            if(hash[s[i]-'a']==1)
            {
                return i;
            }
        }
        return ans;
        
    }
};