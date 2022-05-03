class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        set<int> spc(spaces.begin(),spaces.end());
        string ans="";
        if(spaces[0]==0) 
            ans+=' ';
        for(int i=0;i<s.length();i++)
        {
            if(spc.find(i+1)!=spc.end())
            {
                ans+=s[i];
                ans+=' ';
            }
            else
                ans+=s[i];
        }
        return ans;
    }
};