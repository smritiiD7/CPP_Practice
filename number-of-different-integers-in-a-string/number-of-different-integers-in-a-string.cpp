class Solution {
public:
    int numDifferentIntegers(string w) {
        int i;
        set<string> s;
        for(i=0;i<w.length();i++)
        {
           // int j=i;
            if(isdigit(w[i]))
            {
                string k="";
                while(w[i]=='0')
                      {
                         i++;
                      }
                while(isdigit(w[i]))
                {
                    k+=w[i];
                    i++;
                }
            s.insert(k);
            }
            }
                      int ans=s.size();
                      return ans;
    }
};