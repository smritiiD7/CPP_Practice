class Solution {
public:
    string removeDuplicates(string s, int k) {
      stack<pair<char,int>> st;
      string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(st.size()>0 && st.top().first==s[i])
            {
                st.top().second++;
                if(st.top().second==k)
                     st.pop();       
            }
               
            else
                st.push({s[i],1});
        }
        
        while(st.empty()==false)
        {
            for(int i=0;i<st.top().second;i++){
            ans+=st.top().first;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};