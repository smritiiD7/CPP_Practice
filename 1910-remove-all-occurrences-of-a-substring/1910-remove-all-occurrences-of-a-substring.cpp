class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;
        for(int i=0;i<s.length();i++)
        {
            st.push(s[i]);
             stack<char> temp;
            if(st.size() >= part.length())
            {
               
                int j = part.length()-1;
               while(j>=0 && st.top() == part[j]  )
               {
                   temp.push(st.top());
                   st.pop();
                   j--;
               }
               
                if(temp.size() != part.length())
                {
                    while(temp.empty() ==false)
                    {
                      st.push(temp.top());
                    temp.pop();  
                    }
                }
            }
        }
         string ans="";
        while(!st.empty())
        {
            ans.push_back(st.top()),st.pop();
        }
             reverse(ans.begin(),ans.end());
            
        return ans;
    }
};