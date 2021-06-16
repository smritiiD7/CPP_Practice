class Solution {
public:
    vector<int> diStringMatch(string s) {
        int l=s.length(),i;
        int numI=0,numD=l;
        vector<int> v;
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='I')
            {
                v.push_back(numI);
                numI++;
            }
            else
            {
                v.push_back(numD);
                numD--;
            }
        }
        if(s[l-1]=='I')
        {
            v.push_back(numD);
        }
        else
            v.push_back(numI);
        return v;
    }
};