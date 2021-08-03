class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int> charCopy;
        string ans;
        for(char c: chars)
        {
            charCopy[c]++;
        }
        for(string k : words)
        {
            unordered_map<char,int> charWords;
            bool flag=true;
            for(char ch : k)
            {
               charWords[ch]++; 
            }
            for(char ch : k)
            {
                if(charCopy[ch]<charWords[ch])
                    flag=false;
            }
            if(flag)
            {
                ans+=k;
            }
        }
        return ans.size();
    }
};