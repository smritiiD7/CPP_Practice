class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        int n=s1.length(),m=s2.length(), i=0,j=0;
        string k="";
        vector<string> ans;
        while(i<n)
        {
            k="";
            while(i<n&&s1[i]!=' ')
                  {
                      char c=s1[i];
                      k+=c;
                      i++;
                  }
              mp[k]++;
            i++;
        }
        while(j<m)
        {
            k="";
            while(j<m&&s2[j]!=' ')
            {
                char ch=s2[j];
                k+=ch;
                j++;
            }
            mp[k]++;
            j++;
        }
        for(auto k: mp)
        {
            if(k.second==1)
            {
                string put=k.first;
                ans.push_back(put);
            }
        }
        return ans;
        
    }
};