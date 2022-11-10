class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string ans="";
        int n = s.length();
        for(int i=0;i<n;i++)
        {
            if(st.empty()==false && st.top()==s[i])
            {
                st.pop();
            }
            else
                st.push(s[i]);
        }
        while(st.empty()==false)
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};