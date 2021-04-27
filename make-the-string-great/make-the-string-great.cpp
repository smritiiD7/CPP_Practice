class Solution {
public:
    string makeGood(string s) {
        stack<char> s1;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(!s1.empty()&&abs(s1.top()-s[i])==32)
            {
                s1.pop();
            }
            else
                s1.push(s[i]);
        }
        string res;
        while(!s1.empty())
        {
            res+=s1.top();
            s1.pop();
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};