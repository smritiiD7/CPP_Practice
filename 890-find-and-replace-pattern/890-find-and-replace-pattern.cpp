class Solution {
public:
    string findPattern(string str)
    {
        string temp;
        unordered_map<char,char> mp;
        char ch='a';
        
        for(char c : str)
        {
            if(mp.find(c)==mp.end())
            {
               temp+=ch;
                mp[c]=ch;
                ch++;
                
            }
            else
               temp+=mp[c];
        }
        return temp;
    }
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string pat = findPattern(pattern);
        vector<string> res;
        for(auto i:words)
        {
            if(findPattern(i)==pat)
                res.push_back(i);
        }
        return res;
    
    }
};