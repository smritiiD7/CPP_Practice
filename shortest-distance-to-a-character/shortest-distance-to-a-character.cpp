class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v,ans;
        int i,j,mini=INT_MAX;
        for(i=0;i<s.length();i++)
        {
            if(s[i]==c)
            {
                v.push_back(i);
            }
        }
        for(i=0;i<s.length();i++)
        {
            for(j=0;j<v.size();j++)
            {
                int diff=abs(v[j]-i);
                if(diff<mini)
                {
                    mini=diff;
                }
            }
            ans.push_back(mini);
            mini=INT_MAX;
        }
        return ans;
    }
};