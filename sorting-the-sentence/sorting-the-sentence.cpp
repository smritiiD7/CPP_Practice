class Solution {
public:
    string sortSentence(string s) {
        int i,j;
        vector<string> v(10,"");
        for(i=0;i<s.length();i++)
        {
            j=i;
            string k;
            while(!isdigit(s[j]))
            {
                k+=s[j];
                j++;
            }
            v[s[j]-'0']=k;
            i=j+1;  
        }
        string ans;
        for(i=0;i<v.size();i++)
        {
            if(v[i].size()>0)
            {
                ans+=v[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};