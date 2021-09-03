class Solution {
public:
    int minAddToMakeValid(string str) {
        stack<char> s;
        int cnt=0,n=str.length();
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(')
                s.push(str[i]);
            else if(s.size()!=0)
                s.pop();
            else
                cnt++;
        }
        int ans=s.size()+cnt;
        return ans;
        
    }
};