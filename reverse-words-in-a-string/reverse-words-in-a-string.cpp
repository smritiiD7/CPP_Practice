class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string  word,ans="";
        while(ss>>word) //extracting every single word
        {
            ans=word+" "+ans;
        }
        return ans.substr(0,ans.length()-1);
    }
};