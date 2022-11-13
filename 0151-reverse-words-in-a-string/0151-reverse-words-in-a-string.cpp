class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        stack<string> st;
        string ans;
        string word;
        while(str>>word)
        {
            st.push(word);
        }
        while(st.empty()==false)
        {
            ans+=st.top();
            if(st.size()>1)
            ans+=" ";
            st.pop();
        }
        
        
        return ans;
    }
};