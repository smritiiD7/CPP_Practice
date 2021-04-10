class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
            set<char> s(allowed.begin(),allowed.end());
            int i,j,c=0;
            for(i=0;i<words.size();i++){
                   string k=words[i];
                    int t=0;
                    for(j=0;j<k.length();j++)
                            if(s.count(k[j]))
                            {
                                    t++;
                            }
                    if(t==k.size())
                    {
                            c++;
                    }
            }
          return c;
        
    }
};