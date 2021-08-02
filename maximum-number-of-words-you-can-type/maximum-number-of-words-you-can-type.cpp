class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> charSet;
        int i=0,n=text.length(),ans=0;
        for(char i: brokenLetters)
        {
            charSet.insert(i);
        }
        while(i<n)
        {
            int cnt=0;
            while(i<n&&text[i]!=' ')
            {
                char c=text[i];
               if(charSet.find(c)!=charSet.end())
                   cnt++;
                   i++;
            }
            if(cnt==0)
                ans++;
                i++;    
        }
        return ans;
    }
};